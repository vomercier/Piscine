/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:57:39 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/30 11:08:28 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_any(char **tab, int (*f)(char*));

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

int ft_include_a(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] = a)
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	int i;
	int *map;
	
	char test[] = "aaab";
	char test2[] = "bbbb";
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
