/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:56:12 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/22 14:34:53 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int main(int argc, char **argv)
{
	int x;
	int r;

	x = 5;
	r = ft_recursive_factorial(atoi(argv[1]));
	printf("% d factoriellle : %d\n", x, r);
	return (0);
}
