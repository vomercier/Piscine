/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 08:24:38 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/30 09:25:44 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int *ft_map(int *tab, int length, int(*f)(int));

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb / 10)
		{
			ft_putnbr(nb / 10);
		}
		n = '0' + (nb % 10);
		write(1, &n, 1);
	}
}

int ft_plus(int nb)
{
	nb = nb + 1;
	return (nb);
}

int main()
{
	int i;
	int *map;
	
	int test[] = {45, 15, 99, 876};
	map = ft_map(test, 4, &ft_plus);
	i = 0;
	while (i < 4)
	{
		ft_putnbr(map[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
