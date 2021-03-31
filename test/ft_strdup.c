#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	char *cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(cpy = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int main(int argc, char **argv)
{
	(void) argc;
	char *cpy;
	cpy = ft_strdup(argv[1]);
	printf("%s\n", cpy);
	return (0);
}
