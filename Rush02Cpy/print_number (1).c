
#include "rush02.h"
char* ft_cat(char c1, char c2)
{
	char* str;

	if (!(str = (char*)malloc(sizeof(char) * 3)))
		return (0);
	str[0] = c1;
	str[1] = c2;
	str[2] = 0;
	return (str);
}
// renvoir un pointeur vers une nuovelle chaine (allouée dans cette fonction) 
//pour gérer le caractère à traiter (nouveu pointeur donc ) extrait du nombre 
//(ou centaine ou dizaine ou unité)
char* ft_string(char c1) 
{
	char* str;
	// x2 car on a un caractère et un fin de caractère
	if (!(str = (char*)malloc(sizeof(char) * 2))) 
		return (0);
	str[0] = c1;
	// fin de chaine de caractere \0
	str[1] = 0;
	return (str);
}

//cas des dizaines et unité
void	print_tab2(char* str) 
{
	//cas specifique si le chiffre des dizaine est un 1 on a un mot et 
	//pas un composé de mot eleven à  .... nineteen

	// on affiche le mot de 11 à 19
	if (str[0] == '1')  
		putstr(ft_parse_dict(ft_cat(str[0], str[1])));
	//sinon composition simple des dizaines et des unité
	else
	{
		//on affcihe des dizaines
		putstr(ft_parse_dict(ft_cat(str[0], '0')));
		if (str[1] != '0')
		{
			// union dizaine/unité
			write(1, "-", 1);
			//on affiche l'unité
			putstr(ft_parse_dict(ft_string(str[1])));
		}
	}
}

//cas des centaines
void	print_tab3(char* str) 
{
	//centaines! on vérifie qu'on est pas dan sle cas 103 052 523 
	//--> donc pas de le cas "052" --> pas de centaine. si n a des centaine on passe ici
	if (str[0] != '0') 
	{
		putstr(ft_parse_dict(ft_string(str[0])));
		write(1, " ", 1);
		putstr(ft_parse_dict("100"));
		// en plus des centaine, si pas de dizaine ou pas d'unité on met un " and " 
		//avec des espaces de chaque côté
		if (str[1] != '0' || str[2] != '0') 
			write(1, " and ", 5);
	}
	// maintanant qu'on s'est occupé des centaine on regarde s'il y a des 
	//dizaine et des unité
	if (str[1] != '0' || str[2] != '0') 
	{
		//pas de dizaines
		if (str[1] == '0')
			putstr(ft_parse_dict(&str[2]));//affiche les unité directment car pas de dizaines
		else if (str[1] == '1')
			putstr(ft_parse_dict(ft_cat(str[1], str[2])));
		else
		{
			putstr(ft_parse_dict(ft_cat(str[1], '0')));
			if (str[2] != '0')
			{
				write(1, "-", 1);
				putstr(ft_parse_dict(ft_string(str[2])));
			}
		}
	}
}

//affcihe une chiffre par groupe de 3 au plus (de 1 999) 
void	print_number(char* str) 
{
	int len;

	len = 0;
	while (str[len])
		len++;
	if (len == 1) //cas des unité
		putstr(ft_parse_dict(str));
	else if (len == 2)//cas des dizaines
		print_tab2(str);
	else
		print_tab3(str);//cas des centaine
}
