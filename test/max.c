#include <stdio.h>

int max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;
	
	if (len == 0)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main()
{
	int tab[] = {1, -5, 8, 45, 12, 3, -75};
	printf("%d\n", max(tab, 7));
	return (0);
}
