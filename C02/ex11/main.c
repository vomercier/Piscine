/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:18:08 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/17 12:19:34 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main()
{
	char test1[] = "salut, comment\n tu vAs ? 42mots qurAZqnte-deux";

	printf("%s\n", test1);
	ft_putstr_non_printable(test1);
}
