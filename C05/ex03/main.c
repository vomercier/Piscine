/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 08:28:42 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/22 14:50:58 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main()
{
	int x;
	int power;
	int r;

	x = -5;
	power = 2;
	r = ft_recursive_power(x, power);
	printf("%d puissance %d : %d\n", x, power, r);
	return (0);
}
