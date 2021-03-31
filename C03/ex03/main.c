/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:35:57 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/17 15:40:17 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main()
{
	char test1[20] = "Bonjour";
	char test2[] = "Hello";

	printf("%s \n", strncat(test1, test2, 3));
	printf("%s \n", ft_strncat(test1, test2, 3));
}
