/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:30:07 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/31 09:25:56 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int		exceptions(char sign, int nb2)
{
	if (sign == '/' && nb2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (1);
	}
	if (sign == '%' && nb2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (1);
	}
	return (0);
}

int		op(int a, int b, int (*operation)(int, int))
{
	int result;

	result = operation(a, b);
	return (result);
}

void	ft_do_op(char **argv, int nb1, int nb2)
{
	int		result;
	char	sign;

	if (ft_strlen(argv[2]) != 1 || (argv[2][0] != '+' && argv[2][0] != '-' &&
				argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%'))
		write(1, "0", 1);
	else
	{
		sign = argv[2][0];
		if (!(exceptions(sign, nb2)))
		{
			if (sign == '+')
				result = op(nb1, nb2, addition);
			if (sign == '-')
				result = op(nb1, nb2, soustraction);
			if (sign == '*')
				result = op(nb1, nb2, multiplication);
			if (sign == '/')
				result = op(nb1, nb2, division);
			if (sign == '%')
				result = op(nb1, nb2, modulo);
			ft_putnbr(result);
		}
	}
}

int		main(int argc, char **argv)
{
	int nb1;
	int nb2;

	if (argc != 4)
		return (1);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	ft_do_op(argv, nb1, nb2);
	write(1, "\n", 1);
	return (0);
}
