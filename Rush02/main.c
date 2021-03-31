/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:32:47 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/27 17:36:19 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char	*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_error(int i)
{
	if (i == -1)
		write(1, "Error\n", 6);
	if (i == -2)
		write(1, "Please give me at least one argument\n", 37);
	if (i == -4)
		write(1, "Numbers of arguments must be between 1 and 2\n", 45);
	if (i == -6)
		write(1, "Argv is not an unsigned integer\n", 32);
	exit;
}

int	main(int argc, char **argv)
{
	char *str_letters;
	int str_len;
	int i;

	if (check_str(argc, argv) != 1)
		ft_error(available(argv));
	if (check_str(argc, argv) == 0)
		str_letters = "zero";
	else
	
	str_letters = solve(*argv[1]); //voir pour mettre argv dans une chaine de caractere autre si on veut gerer les 2 cas


	ft_putchar(str_letters);
	return (0);
}
		
		
