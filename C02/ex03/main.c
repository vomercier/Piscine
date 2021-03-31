/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:14:58 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/16 11:20:54 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	char *test1;
	char *test2;
	int r;

	test1 = "0125";
	test2 = "xxx";
	r = ft_str_is_numeric(test1);
	printf("%d\n", r);
	r = ft_str_is_numeric(test2);
	printf("%d\n", r);
}
