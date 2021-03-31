/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:38:51 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/16 10:18:04 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int     main()
{
    char *init;
    char final[20];

	init = "youpi !";
	ft_strncpy(final, init, 3);
	printf("%s", final);
	return (0);
}
