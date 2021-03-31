/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 09:18:43 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/31 09:19:06 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

int					ft_str_is_digit(char *str)
{
	int				i;

	i = -1;
	while (str[++i])
		if (str[i] < 48 || str[i] > 57)
			return (0);
	return (1);
}

int					main(void)
{
	char			*strs1[] = {"Hello", "World", "!"};
	char			*strs2[] = {"Hello", "World", "10"};
	char			*strs3[] = {"1224", "11", "10"};

	printf("%d\n", ft_count_if(strs1, 3, &ft_str_is_digit));
	printf("%d\n", ft_count_if(strs2, 3, &ft_str_is_digit));
	printf("%d\n", ft_count_if(strs3, 3, &ft_str_is_digit));
	return (0);
}
