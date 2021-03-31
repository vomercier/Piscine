/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:16:11 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/16 08:27:34 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *scr);

int		main()
{
	char *init;
	char *final;

	init = "youpi !";
	ft_strcpy(final, init);
	printf("%s", final);
}
