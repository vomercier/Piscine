/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:08:54 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/24 14:00:32 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	if (!(*range = malloc(sizeof(int) * len)))
		return (-1);
	i = 0;
	while (min < max)
	{
		*(*range + i) = min;
		i++;
		min++;
	}
	return (len);
}
