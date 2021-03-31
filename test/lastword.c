/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:40:28 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/31 14:50:18 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	
	(void) argc;
	i = 0;
	while (argv[1][i] != '\0')
		i++;
	while (argv[1][i] != ' ' && argv[1][i] != '\t')
		i--;
	i++;
	while (argv[1][i] != '\0')
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	return (0);
}
