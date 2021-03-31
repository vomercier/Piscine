/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:47:49 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/15 09:58:50 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int x;
	int y;
	int d;
	int m;

	x = 13;
	y = 5;
	ft_div_mod(x, y, &d, &m);
	printf("%d %d\n", x, y);
	printf("%d %d\n", d, m);
}
