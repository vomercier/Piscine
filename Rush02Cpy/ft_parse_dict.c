
#include "rush02.h"
int		ft_word_len(int i)
{
	int		len;
	int		fd;
	char	buffer;

	len = 0;
	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
		return (0);
	while (i-- > 0)
		read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	while (read(fd, &buffer, 1) && buffer != '\n')
		len++;
	return (len);
}
// on renvoi un pointeur alloué sur la chaine du mot correspodnant dans le dictionnaire 
//en le recopiant lettre par lettre après avoir récupérer la taille du mot à recopier
char* ft_get_word_in_dict(int fd, int nb_char, char buffer) 
{
	//str nouveau pointeur qui sera alooué et qui renverra le mot du dictionnaire
	char* str; 
	int		i;
	// on récupere la taille du mot à ecrire
	i = ft_word_len(nb_char); 
	//on alloue la taille du mot + 1 caractere de fin de chaine
	if (!(str = (char*)malloc(sizeof(char) * (i + 1)))) 
		return (0);
	while (buffer == ' ')
		read(fd, &buffer, 1);
	read(fd, &buffer, 1);
	while (buffer == ' ')
		read(fd, &buffer, 1);
	i = 0;
	// on lit le omt dans le dict (dernier mot de la ligne donc) 
	//et on a le mot jusqu'à ce qu'onntombe sur lma fin de ligne
	while (buffer != '\n') 
	{
		str[i] = buffer;
		i++;
		read(fd, &buffer, 1);
	}
	// on a récupere le mot et on ajout eun caractere de fin de chaine
	str[i] = '\0'; 
	return (str);
}
// permet de faire avancer le pointeur de lecture dans le descripteur de fichier fd jusqu'au 
// caractère de fin de ligne comme ca la prochaine lecture se fera sur la ligne suivante
void	ft_go_to_next_line(int* fd, int* i) 
{
	char	buffer;
	// on fait plusierus read de suite de 1 caractère pour faire avancer la tete de lecture 
	//juqu'a la fin de ligne
	while (read(*fd, &buffer, 1)) 
	{
		if (buffer == '\n')
			break;
	}
	//on rinitialize i pour la prochaine ligne (on aurait pu le faire en dehaoirs 
	//de la fonction si la focntion a reussi, pas forement la peine de rinitioaliser 
	//ici en l'ayant passé en param 
	*i = 0;
}


//enleve les espace qu'il pourrait y avoir dans le mot et 
//renvoi une chaine allouée dediée et allouée
char* ft_remove_multiple_space(char* str) 
{
	char* str_cpy;
	int		len;
	int		i;
	int		j;
	// longeur de la chaine
	len = ft_strlen(str); 
	if (!(str_cpy = (char*)malloc(sizeof(char) * (len + 50))))
		ft_error();
	i = 1;
	j = 1;
	str_cpy[0] = str[0];
	while (str[i])
	{
		if (!(str[i] == ' ' && str[i - 1] == ' '))
		{
			str_cpy[j] = str[i];
			j++;
		}
		i++;
	}
	str_cpy[j] = '\0';
	ft_realloc(&str_cpy, '-');
	return (str_cpy);
}

// traduit un nombre en lettre 1 --> one  , output est le mot à afficher
char* ft_parse_dict(char* str) 
{
	int		fd;
	int		i;
	char	buffer;
	char* output;

	output = NULL;
	// on lit le fichier dictionnaire
	if ((fd = open("numbers.dict", O_RDONLY)) == -1)  
		return (0);
	i = 0;
	while (read(fd, &buffer, 1))
	{
		// si on ne toruve pas la cahine tr dans le buffer on passe à la ligne suivante
		// sans incrémenter i
		//sans incrémenter i
		if (str[i] != buffer && str[i] != '\0') 
		{
			ft_go_to_next_line(&fd, &i);
			continue;
		}
		//on trouve le mot qu'on a mis dans une cahine allouée qu'on met dans output
		if ((buffer == ':' || buffer == ' ') && str[i] == '\0')
			output = ft_get_word_in_dict(fd, i, buffer); 
		if (str[i] == '\0')
		{
			ft_go_to_next_line(&fd, &i);
			continue;
		}
		i++;
	}
	//renvoi output en suppriment les espaces qu'il pourrait y avoir
	return (ft_remove_multiple_space(output));  
}
