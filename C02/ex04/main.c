/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:32:55 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/16 11:35:06 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	char *test1;
	char *test2;
	int r;

	test1 = "0125";
	test2 = "xxx";
	r = ft_str_is_lowercase(test1);
	printf("%d\n", r);
	r = ft_str_is_lowercase(test2);
	printf("%d\n", r);
}
