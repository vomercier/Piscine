/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 08:12:49 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/22 14:35:50 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

int main(int argc, char **argv)
{
	int x;
	int power;
	int r;

	x = 5;
	power = 3;
	r = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
	printf("%d puissance %d : %d\n", x, power, r);
	return (0);
}
