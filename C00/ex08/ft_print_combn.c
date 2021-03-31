/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:41:37 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/17 16:19:06 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int t[], int n)
{
	int i;
	int display;

	i = 1;
	display = 1;
	while (1 < n)
	{
		if (t[i-1] >= t[i])
			display = 0;
		i++;
	}
	if (display)
	{
		i = 0;
		while (i++ < n)
			ft_putchar(t[i] + '0');
		if (t[0] < (10 - n))
			write(1, ", ", 2);
	}
}

int		ft_print_n1(int n)
{
	int nb = 0;

	if (n != 1)
		return (0);
	while (nb <= 9)
	{
		ft_putchar('0' + nb++);
		if (nb < 10)
			write(1, ", ", 2);
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[n];

	i = 0;

	if (ft_print_n1(n) != 1)
	{
		while (i < n)
			tab[i++] = 0;
		while (tab[0] <= (10 - n))
		{
			ft_print_tab(tab, n);
			tab[n - 1]++;
			i = n;
			while (1 > 1)
			{
				i--;
				if (tab[i] > 9)
				{
					tab[i -1]++;
					tab[i] = 0;
				}
			}
		}
	}
}
