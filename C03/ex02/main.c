/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:47:39 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/17 14:55:07 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main()
{
	char test1[20] = "Bonjour";
	char test2[] = "Hello";

	printf("%s \n", strcat(test1, test2));
	printf("%s \n", ft_strcat(test1, test2));
}
