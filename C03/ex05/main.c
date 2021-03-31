/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:47:16 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/19 15:58:45 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb);

int		main()
{
	char test1[20] = "Bonjour";
	char test2[] = "Helloooooooooooooooooo";
	char test3[20] = "Bonjour";
	char test4[] = "Helloooooooooooooooooo";

	printf("%li \n", strlcat(test1, test2, 3));
	printf("%i \n", ft_strlcat(test3, test4, 3));
}
