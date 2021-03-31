
#include "rush02.h"
void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

//affiche les milliers/millions/milliard
void	ft_print_separator_with_space(int j)  
{
	write(1, " ", 1);
	//afffche à l'écranle nombre de fois 3 --> si 2 --> milliers , 
	//si 3 --> mimllions, si 4 milliard etc
	print_separator(j);
}

//fonction poru supprimer les zeros au déut du nombre à convertir (str) en lettre 
//car ils ne sont pas à convertir  en texte
void	ft_remove_start_zeros(char** str) 
{
	// pointeur qui va permettre la copie du contenu 
	//et sa modification on veut enlever les 0
	char* str_cpy;
	int		i;
	int		j;
	// on alloue la memoire du pointeur qui contiendra la nouvelle chaine, 
	//sa taille max sera la longueur de la chaine + un caractère de fin de chaine 
	if (!(str_cpy = (char*)malloc(sizeof(char) * (ft_strlen(*str) + 1)))) 
		ft_error();
	i = 0;
	j = 0;
	// récupération du nombre de 0 en début de chaine itérativement on parcours 
	//tous les 0 à la suite depuis le début, et on les met dans i ex: 001023 --> i vaudra 2
	while ((*str)[i] == '0')  
		i++;
	// ici i démarre à l'index du premier chiffre apres le/les zero si le chiffre est 
	//001023 alors on recopie dans strcopy una un les chiffres à partir de 2 l'indes 2 de str --> 1 0 2 3 
	while ((*str)[i])
	{
		//on recopie donc les chiffre 1 à 1 après les premiers 00 de str dans str_copy
		str_cpy[j] = (*str)[i]; 
		i++;
		j++;
	}
	//si j vaut 0 on gère le cas où on avait que des 0
	if (j == 0)  
		str_cpy[j++] = '0';
	// on ajoute un caractère de fin de chaine dans tou sles cas
	str_cpy[j] = '\0'; 
	// on fait pointer le pointeur str sur la nouvelle valeur pointé par str_copy
	*str = str_cpy;
	// pas sur que ce soit utilise ça réalloue une nouvelle fois la valeur 
	//dans une nouvelle adresse pour str dans un nouveau pointeur donc str est different 
	//de str copy (encore un nouveau pointeur)
	ft_realloc(str, '-'); 
}

int		ft_strcmp(char* s1, char* s2)
{
	int		i;

	i = 0;
	// on parse tout le nombre chiffre après chiffre
	while (s1[i]) 
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}
