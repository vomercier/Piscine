/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:45:14 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/26 16:03:59 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(int argc, char **argv)
{
	int *range;
	int taille;
	int i;

	(void) argc;
	taille = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	printf("Taille = %d\n", taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	i = 0;
	while (i < taille)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
