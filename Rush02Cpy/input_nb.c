#include<stdio.h>
#include "rush02.h"

int		ft_strlen(char* str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char* ft_strncpy(char* dest, char* src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// on appelle realloc avec les signe + ou - si - c'est juste une reallocation normale 
//si + on met +100 sur la taille du buff realloué pour des mots
int		ft_realloc(char** str, char sign) 
{
	int		len;
	char* str_cpy;

	len = ft_strlen(*str); // taille du nombre à convertir en lettre
	if (sign == '+')
	{
		if (!(str_cpy = (char*)malloc(sizeof(char) * (len + 100))))
			exit(0);
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	else
	{
		if (!(str_cpy = (char*)malloc(sizeof(char) * len)))
			exit(0);
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	return (1);
}

// pas utilisé autre exercice
char* get_nb_from_pipe(void) 
{
	char* str;
	char	buffer;
	int		i;
	int		j;

	if (!(str = (char*)malloc(sizeof(char) * 100)))
		return (0);
	i = 0;
	j = 99;
	while (j == 99)
	{
		j = -1;
		while (read(STDIN_FILENO, &buffer, 1) > 0 && ++j < 99)
			str[i++] = buffer;
		if (i == 0)
			return (0);
		str[i] = '\0';
		if (j < 99)
			ft_realloc(&str, '-');
		else
			ft_realloc(&str, '+');
	}
	str[--i] = '\0';
	return (str);
}
