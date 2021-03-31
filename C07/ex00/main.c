/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:45:25 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/23 13:54:10 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int 	main(int argc, char **argv)
{
	char *dest1;
	char *dest2;

	(void) argc;
	dest1 = ft_strdup(argv[1]);
	dest2 = strdup(argv[1]);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}
