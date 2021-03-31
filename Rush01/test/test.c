#include <unistd.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_check_format_arg(char *str)
{
    int i;

    i = -1;
    if (ft_strlen(str) != 31) ////////////// Y a-t-il bien 16 chiffres et 15 espaces ?
        return (0);
    while (str[++i]) ////////////// N'y a-t-il que des espaces et des chiffres entre 1 et 4 ?
        if (str[i] != 32 && (str[i] < '1' || str[i] > '4'))
            return (0);
    if (str[0] < '1' || str[0] > '4') ////////////// Le premier caractère est-il bien un chiffre entre 1 et 4 ?
        return (0);
    i = 1; ////////////// Les caractères à l'index impair sont-ils bien des espaces et ceux à l'index pair sont-ils bien des chiffres entre 1 et 4 ?
    while (str[i])
    {
        if (str[i] != 32)
            return (0);
        i++;
        if (str[i] < '1' || str[i] > '4')
            return (0);
        i++;
    }
    i = -1; ////////////// La somme des caractères de chaque côté du tableau est-elle bien inférieure à 6 ?
    while (++i < 24)
        if (str[i] + str[i + 8] > ('1' + '4'))
            return (0);
    return (1);
}

void    ft_fill_tab(char matrice[6][6], char argv[])
{
    int i;
    int j;
    int k;

    i = -1;
    while (++i < 6)
    {
        j = -1;
        while (++j < 6)
            matrice[i][j] = '0';
    }
    j = 1;
    k = 0;
    while (j < 6)
    {
        if (j != 0 && j != 5)
        {
            matrice[0][j] = argv[k * 2];
            matrice[5][j] = argv[(k * 2 + 8)];
            matrice[j][0] = argv[(k * 2 + 16)];
            matrice[j][5] = argv[(k * 2 + 24)];
        }
        j++;
        k++;
    }
}

int	find_line_base(int line, char matrice[6][6])
{
	if (matrice[line][0] == '1' && matrice[line][5] == '2')
		return(1);
	if (matrice[line][0] == '1' && matrice[line][5] == '3')
		return(2);
	if (matrice[line][0] == '1' && matrice[line][5] == '4')
		return(3);
	if (matrice[line][0] == '2' && matrice[line][5] == '1')
		return(4);
	if (matrice[line][0] == '2' && matrice[line][5] == '2')
		return(5);
	if (matrice[line][0] == '2' && matrice[line][5] == '3')
		return(6);
	if (matrice[line][0] == '3' && matrice[line][5] == '1')
		return(7);
	if (matrice[line][0] == '3' && matrice[line][5] == '2')
		return(8);
	if (matrice[line][0] == '4' && matrice[line][5] == '1')
		return(9);
	else return (0);
}

int	ft_write_line(char matrice[6][6], int line, int indice)
{
    const char *base[10][6] = {
        {"sol1", "sol2", "sol3", "sol4", "sol5", "sol6"},
		{"4123", "4213"},
		{"4132", "4231", "4312"},
		{"4321"},
		{"3124", "3214"},
		{"1423", "2143", "2413", "3142", "3241", "3412"},
		{"1432", "2431", "3421"},
		{"1324", "2134", "2314"},
		{"1243", "1342", "2341"},
		{"1234"}};
	int i;
	int base_line;

	i = 0;
	base_line = find_line_base(line, matrice);
	if (base_line != 0)
	{
		if (!base[base_line][indice])
			return (0);
		else
		{
			while (i < 4)
			{
				matrice[i + 1][line] = base[base_line][indice][i];
				i++;
			}
		}
	}
	return (1);
}

int     ft_absent_colonne(int line, char matrice[6][6])
{
    int x;
	int index_l;

	if (line == 1)
		return (1);
	index_l = line - 1;
    x = 1;
    while (x < 5)
    {
		if (matrice[x][line] == matrice[x][index_l])
			return(0);
		x++;
    }
    return (1);
}

int	presence_table(char matrice[6][6], int nb_line, int indice)
{
	const char *base[10][6] = {
        {"sol1", "sol2", "sol3", "sol4", "sol5", "sol6"},
		{"4123", "4213", NULL, NULL, NULL, NULL},
		{"4132", "4231", "4312", NULL, NULL, NULL},
		{"4321", NULL, NULL, NULL, NULL, NULL},
		{"3124", "3214", NULL, NULL, NULL, NULL},
		{"1423", "2143", "2413", "3142", "3241", "3412"},
		{"1432", "2431", "3421", NULL, NULL, NULL},
		{"1324", "2134", "2314", NULL, NULL, NULL},
		{"1243", "1342", "2341", NULL, NULL, NULL},
		{"1234", NULL, NULL, NULL, NULL, NULL}};
	int base_line;

	base_line = find_line_base(nb_line, matrice);
	if (base[indice][base_line] == NULL)
		return (0);
	return (1);
}

// verif du haut vers le bas
int     ft_check_north(char matrice[6][6], int j)
{
    int i;
    int tmp;
    int count;

    i = 1;
    tmp = matrice[i][j];
    count = 1;
        while (i < 5)
        {
            i++;
            if (tmp < matrice[i][j])
            {
                tmp = matrice[i][j];
                count++;
            }
        }
        if (count != matrice[0][j])
            return (0);
    return (1);
}

// verif du bas vers le haut
int     ft_check_south(char matrice[6][6], int j)
{
	int i;
    int tmp;
    int count;

    i = 4;
    tmp = matrice[i][j];
    count = 1;
    // verif du haut vers le bas
        while (i > 0)
        {
            i--;
            if (tmp < matrice[i][j])
            {
                tmp = matrice[i][j];
                count++;
            }
        }
        if (count != matrice[5][j])
            return (0);
    return (1);
}
// La fonction retourne 0 si les valeurs ne correspondent pas, elle retourne 1 si c'est bon
int  ft_check_view_column(char matrice[6][6])
{
    int j;

    j = 1;
    while (j < 5)
    {
        if (ft_check_north(matrice, j) && ft_check_south(matrice, j))
        j++;
        else return (0);
    }
    return (1);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	affich_result(char matrice[6][6])
{
	int i;
	int j;

	i = 1;
    while (i < 5)
    {
        j = 1;
        while (j < 5)
        {
            ft_putchar(matrice[j][i]);
			ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int	main(int argc, char **argv)
{
	int 	indice[4];
	char	matrice[6][6];
	int		nb_line;
	
	if (!ft_check_format_arg(argv[1]))
		return (0);
	if (argc != 2)
		return (0);
	ft_fill_tab(matrice, argv[1]);
	indice[0] = -1;
	indice[1] = -1;
	indice[2] = -1;
	indice[3] = -1;
	nb_line = 1;

	while (nb_line < 5)
	{
		indice[nb_line - 1] = indice[nb_line - 1] + 1;
		if (ft_write_line(matrice, nb_line, indice[nb_line - 1]))
		{
			if (ft_absent_colonne(nb_line, matrice))
			{
				if (nb_line == 4 && (ft_check_view_column(matrice)))
					break;
				else
					nb_line++;
			}
			else
			{
				if (!presence_table(matrice, nb_line, indice[nb_line - 1]))
					nb_line = nb_line - 1;
			}
		}
	}
	affich_result(matrice);
	return (0);
}
