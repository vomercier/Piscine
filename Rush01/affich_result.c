/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affich_result.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:01:01 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/21 13:21:22 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	affich_result(matrice)
{
	int i;
	int j;

	i = 1;
    while (i < 5)
    {
        j = 1;
        while (j < 5)
        {
            ft_putchar(matrice[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
