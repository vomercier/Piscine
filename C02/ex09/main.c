/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:10:48 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/17 11:46:30 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main()
{
	char test1[] = "salut, comment tu vAs ? 42mots qurAZqnte-deux";

	printf("%s\n", test1);
	printf("%s", ft_strcapitalize(test1));
}
