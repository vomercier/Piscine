/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:26:29 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/18 13:50:07 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char test1[] = "Bonjour";
	char test2[] = "Hello";
	char test3[] = "Bon";
	char test4[] = "Bonx";
	char test5[] = "Bo";

	printf("%d %d\n", ft_strncmp(test1, test2, 4), strncmp(test1, test2, 4));
	printf("%d %d\n", ft_strncmp(test1, test3, 0), strncmp(test1, test3, 0));
	printf("%d %d\n", ft_strncmp(test1, test4, 4), strncmp(test1, test4, 4));
	printf("%d %d\n", ft_strncmp(test1, test4, 3), strncmp(test1, test4, 3));
	printf("%d %d\n", ft_strncmp(test1, test5, 3), strncmp(test1, test5, 3));
}
