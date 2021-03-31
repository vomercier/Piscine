/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:24:57 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/15 10:31:12 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int     main()
{
    int x;
    int y;

    x = 13;
    y = 5;
	printf("%d %d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("%d %d\n", x, y);
}
