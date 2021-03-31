#include <stdio.h>

char *strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[1]);
	printf("%s\n", strrev(argv[1]));
	return (0);
}
