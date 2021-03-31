#include "rush02.h"

//renvoi les milliers, millions... ex "1000" "1000000"
char	*create_number(int j) 
{
	char	*str;
	int		i;

	i = 1;
	//nombre de fois (3 caractere de milliers + 1 : ex "1"000)  + 1 caractere de fin de ligne 
	//--> *3 + 1 + 1
	str = (char *)malloc((j - 1) * 3 + 2);
	// on veut faire des 1000 1000000 1000000 --> commence toujours par 1
	str[0] = '1'; 
	while (i < (j - 1) * 3 + 1)
	{
		//on complete le nombre de 000 pour faire des 100 10000 100000000 ...
		str[i] = '0'; 
		i++;
	}
	str[i] = 0;
	return (str);
}
// pour afficher les milliers, millions, milliard
void	print_separator(int j)
{
	//on affiche les milliers , millions etc
	if (j > 1)
		putstr(ft_parse_dict(create_number(j))); 
}
