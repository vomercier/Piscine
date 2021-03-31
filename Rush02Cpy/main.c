#include "rush02.h"


void	putstr(char* str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	div_string(int* i, char* str, char* argv, int* l) // i ets la longer du nombre à convertir 
{
	int		j;
	int		k;

	k = 0;
	j = 0;
	//2 cas possibles soit i (longeur du nmbre) est un multiple de 3 --> ca veut dire qu'on parlerai 
	//des "unité de centaines" ex tout les chiffre en X cent  300 000("trois cent" mille) ,  500 000 000, ;...
	//si pas un mulitple tout pile de 3 (= reste de la division par 3 est non nul) on parle alors on 
	//parle des unité et des dizaines 15 000 ("quinze" mille), 3 000 ("3" mille) --> 0 à 99
	if (*i % 3 != 0) 
		while (*i % 3 != 0)
		{
			// on va decrementer i pour voir si on parle de dizaine ou d'unité (peu importe que
			//ce soit des millier ou des milliosn c'est la même regle pour courvir 0 à 99) 
			//on met le premier chiffre --> argv[0] puis argv[1] dans str[0], str[1]
			str[k] = argv[*l];
			(*i)--;
			k++;
			(*l)++;
		}
	else
		while (j < 3)
		{
			// i (longeur du nmbre) est un multiple de 3 -- > ca veut dire qu'on parlerai des
			//"unité de centaines" ex tout les chiffre en unité et  cent  300 000("trois cent" mille)
			str[k] = argv[*l];//error initialisation de l - 858993460
			j++;
			k++;
			(*l)++;
		}
	str[k] = 0;
}

//fonction qui renvoit -1 si non valide sinon le nombre de digit du 
//nombre à écrire ex 100000 --> 6
int		check_string(int argc, char** argv) 
{
	int		i;

	//il manque a minima le nombre à convertir en lettre
	if (argc == 1)
		return (-1);
	// trop de parametre car au maximum argc = 2 : soit arg = 1: nom du prog + nombre à convertir 
	//il maque dans l'exo la gestion du second dictionnaire
	if (argc > 2)
		return (-1); 
	//if (ft_strcmp(argv[1], "-p") == 0) // pourquoi
	//	argv[1] = get_nb_from_pipe(); //pourquoi?
	i = 0;
	// s'il y a des 0 au debut du nombre on les enleves
	 //si on a des 0 on va modifier le nombre et le renvoyer sans les 0 (passage par adresse 
	//pour modifier sa valeur) ça permet de compter le bon nombre de chiffre à convertir en lettre
	if (argv[1][0] == '0') 
		ft_remove_start_zeros(&argv[1]);
	// si le premier paramtre commence par une chaine vide on renvoit une erreur
	if (argv[1][0] == '\0') 
		return (-1);
	// on parcours le nombre chiffre par chiffre pour compter sa longueur i
	while (argv[1][i])  
	{
		// comme on parcours le nombre, chiffre par chiffre, si ce n'est pas un "chiffre" 
		//donc cmopris entre 0 et 9 alors on retourne une erreur
		if (argv[1][i] < '0' || argv[1][i] > '9')   
			return (-1);
		i++;
	}
	// si la longueur (i) du chiffre à convertir est supérieur au max défini dans 
	//le dictionaire on renvoie une erreur, sinon on continue le prg
	comp_str_dict(i);
	// on renvoit la longeur i du nombre
	return (i); 
}


// i est la taille du noimbre à convertir argv contient le nombre et str une chaine 
//alloué oar le programme principal precedemment et non initialisé encore
void	display(int i, char** argv, char* str) 
{
	int j;
	int k;
	int	l;
	l = 0; 
	// on met dans le j le nombre de fois qu'on a 3 chiffre si 
	//(note: i est entier et j aussi donc si 6 --> 2   si   7 --> 2   si 9 -->3) 
	j = i / 3; 
	// on regarde si le nombre à convertir etait multiple de 3 en regardant le
	//reste de la division de i par 3 . Si 6 --> pas de reste , si 7 --> reste 1
	if (i % 3 != 0) 
		j++; //donc on incremente j
	// on stocke j dans k pour avoir 2 variable qui demarre en meme temps et 
	//on va decrementer j petit à petit
	k = j; 
	//on parcours j en le faisant décroitre en ecrivant car on convertit les centaines
	//de millions pui les million puis les milliers etc
	while (j != 0) 
	{
		// on passe la taille i du nombre, le nombre lui meme dans argv[1] et un pointeur 
		//qui s'incremente de 3 en 3 puor gerer au fur et a mesure les billions, milliosn, 
		//millers par groupe de 3 ex 103 521 --> 103 et 3 --> 103 et mille...
		div_string(&i, str, argv[1], &l); 
		//regle pour mettre une virgule genre one million "," five hundred speration triplet
		if (j != k && ft_strcmp(str, "000") != 0) 
			write(1, ", ", 2);
		// regle pour mettre un AND 
		if (j == 1 && ft_strcmp(str, "000") != 0 && str[0] == '0' && k != 1) 
			write(1, "and ", 4);
		// fonction pour afficher les nombre par groupe de trois de 1 à 999
		print_number(str); 
		//affiche si c'est des milliers milliosn milliards etc ... 
		//c'est le nombre de j qui le determine car par groupe de trois, 
		//si j = 2 --> milliers, j = 3 --> millions
		if (ft_strcmp(str, "000") != 0 && j != 1)
			ft_print_separator_with_space(j); 
		//on décremente petit à petit j car on écrt de gauche à droite dabord les millions puis les milliers .....
		j--;
	}
	//retour a la ligne on a terminer l'affichage complet
	write(1, "\n", 1);
}

int		main(int argc, char** argv)
{
	// ce sera le nobre de digit dunombre ex : 100000--> 6
	int		i; 
	char* str; 

	if ((i = check_string(argc, argv)) == -1)
		ft_error();
	// 4 caracteres car au plus on gere 4 cractere poour determiner et afficher le rang dans 
	//d'un groupe de 3  chiffres plus tard dans le code quand on manipule str on met des fois 1000 dedans par exemple
	if (!(str = (char*)malloc(sizeof(char) * 4)))  
		ft_error();
	// i nombre de digit, argv contient les param dont le nombre 
	//(et le dictionnaire en option), str la chaine allouee pour geree l'affichage 
	display(i, argv, str); 
}
