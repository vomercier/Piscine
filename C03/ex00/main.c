/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 09:55:32 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/17 10:08:42 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	char test1[] = "Bonjour";
	char test2[] = "Hello";
	char test3[] = "Bonjour";

	printf("%d %d\n", ft_strcmp(test1, test2), strcmp(test1, test2));
	printf("%d %d\n", ft_strcmp(test1, test3), strcmp(test1, test3));
}
