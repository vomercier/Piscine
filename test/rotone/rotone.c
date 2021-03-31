#include <stdio.h>

char *ft_rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
			str[i] = 'a';
		else
			str[i] = str[i] + 1;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_rotone(argv[1]));
	return (0);
}
