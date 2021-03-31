#include <stdio.h>

int	ft_atoi(char *str)
{
	int sign;
	int i;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
	
