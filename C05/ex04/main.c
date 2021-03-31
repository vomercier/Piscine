/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 08:52:02 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/22 14:36:51 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int main(int argc, char **argv)
{
	int index;
	int r;

	index = 13;
	r = ft_fibonacci(atoi(argv[1]));
	printf("Fibonacci index %d : %d\n", index, r);
	return (0);
}
