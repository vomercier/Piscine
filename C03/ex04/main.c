/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 07:51:49 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/18 08:01:52 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main()
{
	char test1[20] = "ababababc";
	char test2[] = "bab";

	printf("%s \n", strstr(test1, test2));
	printf("%s \n", ft_strstr(test1, test2));
}

