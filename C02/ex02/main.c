/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:57:40 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/16 11:07:36 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	char	*test1;
	char	*test2;
	int 	r;

	test1 = "test";
	test2 = "test0";
	r = ft_str_is_alpha(test1);
	printf("%d\n", r);
	r = ft_str_is_alpha(test2);
	printf("%d\n", r);
}
