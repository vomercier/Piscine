/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:42:58 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/22 14:33:30 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb);

int main(int argc, char **argv)
{
	int x;
	int r;

	x = 5;
	r = ft_iterative_factorial(atoi(argv[1]));
	printf("% d factoriellle : %d\n", x, r);
	return (0);
}
