/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:40:13 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/22 14:39:33 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
int	ft_is_prime(int nb);

int main(int argc, char **argv)
{
	printf("%d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}
