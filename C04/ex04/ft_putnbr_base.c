/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:09:46 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/24 14:44:20 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int ft_check_base(char *str)
{
	int n;
	int i;
	int j;

	n = ft_strlen(str);
	i = 0;
	if (n <= 1)
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] =='-')
			return (0);
		if (str[i] < 32 || str[i] > 126)
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	nbr_c[32];
	int		base_div;
	int		i;

	if (ft_check_base(base))
	{
		base_div = ft_strlen(base);
		if (nbr < 0)
		{
			nbr_l = -nbr;
			ft_putchar('-');
		}
		else
			nbr_l = nbr;
		i = 0;
		while (nbr_l > 0)
		{
			nbr_c[i] = base[nbr_l % base_div];
			nbr_l /= base_div;
			i++;
		}
		while (--i >= 0)
			ft_putchar (nbr_c[i]);
	}
}
