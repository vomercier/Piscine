/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:44:32 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/16 11:48:05 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main()
{
	char *test1;
	char *test2;
	int r;

	test1 = "ADRE";
	test2 = "xXxx";
	r = ft_str_is_uppercase(test1);
	printf("%d\n", r);
	r = ft_str_is_uppercase(test2);
	printf("%d\n", r);
}
