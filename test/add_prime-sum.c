#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int nb;
	int i;
	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i]<= '9')
	{
		nb = nb * 10 + str[i] - 48;
	}
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	char	n;
	if (nb == -2147483648)			
		write(1, "-2147483648", 11);		
	else	
	{		
		if (nb < 0)		
		{			
			write(1, "-", 1);			
			nb = -nb;		
		}		
		if (nb / 10)				
			ft_putnbr(nb / 10);				
		n = '0' + (nb % 10);		
		write(1, &n, 1);	
	}
}


int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb / i)
		if (nb % i == 0)
			return (0);
	return (1);
}

int main(int argc, char **argv)
{
	int nb;
	int i;

	(void) argc;
	nb = ft_atoi(argv[1]);
	i = 2;
	while (ft_is_prime(nb) == 0)
	{
		if (nb % i == 0)
		{
			ft_putnbr(i);
			write(1, " ", 1);
			nb = nb / i;
		}
		else
			i++;
	}
	return (0);
}
