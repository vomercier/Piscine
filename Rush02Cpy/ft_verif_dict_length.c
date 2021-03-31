#include "rush02.h"

// parcours du dctionnaire la focntion renvoit 0 (on pourrait mettre -1 ;)) si la le fichier n'est pas lu
int		ft_verif_dict_length(void) 
{
	int		i;
	int		j;
	int		fd;
	char	buffer;

	j = 0;
	i = -1;
	// ouverture du fichier en read only --> fd est descripteur de fichier pointant  sur 
	//la lecture du contenu focntion open du langage c, la fonction open 
	//par defaut renvoi -1 si la lecture echoue 
	if ((fd = open("numbers.dict", O_RDONLY)) == -1) 
		return (0);
	//lit jusqu'à 1 caractere depuis le descripteur de fichier fd dans le buffer 
	//pointé par buffer qui contiendra le caractere.
	while (read(fd, &buffer, 1)) 
	{
		// on s'arrete de lire  à chaque fois qu'on rencontre ' ' ou : 
		//et on va à la ligne suivante pour compter le nombre de ligne
		if (buffer == ' ' || buffer == ':') 
		{
			if (i > j)
				j = i;
			// fonction qui cherche le caractère de fin de ligne pour faire avancer le curseur de lecture 
			//dans le fiochier df on passe i en parametre mai on doit pouvoir le rmeplacer par i=0 
			//si la fonction passage à la ligne suivante est reussi
			ft_go_to_next_line(&fd, &i); 
			// permet de ne pas incrémenter i on repart direct dans le while sans faire i++ car 
			//on vient de termine rune ligen et de emttre i = 0 dans la fonction de fin de ligne
			continue; 
		}
		//i est incrémenté à chaque fois qu'on lit un caractère de type chiffre sur la ligne et qui 
		//précède dans le dict ":" ou " " --> ainsi sur la dernière ligne on a i qui vaut 37, 
		//on copie i dans j (si i est supérieur au dernier j retenu)
		i++; 
		//car i est ramené à 0  à chaque fin de ligne par la fonction ft_go_to_next_line
		//pour recompter à nouveau le nombre de chiffre sur al ligne suivante avant 
	}
	// on rajoute 2 car par exemple si on on  1000 en taille max (4), alors on est 
	//capable de decrire (6) chiffre car on peut decrire par exemple 999 000 
	return (j + 2);
}

// si la longueur du chiffre à convertir est supérieur au max défini dans
//le disctionaire on renvoie une erreur, sinon on continue le prg
void	comp_str_dict(int len) 
{
	int len_max;
	// on regarde dans e dictionnaire la longueur  de chiffre max que l'on a 
	//de défini // noter que len_max vaudra 0 si le fichier n'est pas lu
	len_max = ft_verif_dict_length();
	// si la longueur du chiffre à convertir est supérieur au max défini 
	//dans le disctionaire on renvoie une erreur, sinon on continue le prg
	if (len_max < len) 
		ft_error();
}
