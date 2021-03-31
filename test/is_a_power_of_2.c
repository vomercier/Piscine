#include <stdlib.h>
#include <stdio.h>


int is_a_power_of_2(unsigned int n)
{
	int i;
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	else
		return(0);
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", is_a_power_of_2(atoi(argv[1])));
	return (0);
}

