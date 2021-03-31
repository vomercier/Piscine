/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:36:36 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/24 11:38:31 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strjoin(int size, char** strs, char* sep);

int main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, "XXX"));
	return 0;
}
