/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absent_colonne.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:50:27 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/21 12:54:22 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_absent_colonne(int line, char **matrice)
{
    int x;
	int index_l;

	if line == 1
		return (1);
	index_l = line - 1;
	while index_l >= 1
    x = 1;
    while (i < 5)
    {
		if (matrice[x][l] == matrice[x][index_l])
                    return(0);
        }
        i++;
    }
    return (1);
}
