/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:00:49 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/21 11:17:32 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_verif_value_dowm_up(char **matrice)
    int x;
    int y;
    int tmp;
    int count;

    x = 4;
    y = 1;
    tmp = matrice[x][y];
    count = 1;
    // verif du bas vers le haut, de gauche a droite
    while (y < 5)
    {
        while (x > 0)
        {
            x--;
            if (tmp < matrice[x][y])
            {
                tmp = matrice[x][y];
                count++;
            }
    	}
		if count != matrice[5][y]
			return (0);
		y++;
	}
    x = 0;
    y = 0;
    tmp = 0;
    count = 1;
    // verif du haut vers le bas
    while (x < 5)
    {
        while (y < 5)
        {
            tmp = matrice[x][y];
            x++;
            if (tmp < matrice[x][y])
            {
                tmp = matrice[x][y];
                count++;
            }
		}
		if count != matrice[0][y]
			return (0);
		y++;
	}
	return (1);
}
