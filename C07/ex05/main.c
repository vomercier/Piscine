/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:56:29 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/25 13:09:57 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char **ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
	char **tab;
	int i;

	tab = ft_split(argv[1], argv[2]);
	while (tab[i])
	{
		printf("%s \n", tab[i]);
		i++;
	}
	return (0);
}
