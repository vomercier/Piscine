/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:11:30 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/26 15:52:10 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int main(int argc, char **argv)
{
	int *range;
	int i;

	(void) argc;
	range = ft_range(atoi(argv[1]), atoi(argv[2]));
	i = 0;
	while (range[i])
	{
		printf("%d, ", range[i]);
		i++;
	}
	return (0);
}
