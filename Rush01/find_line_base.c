/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_line_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:06:26 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/21 10:35:50 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_line_base(int line, char **matrice)
{
	if (matrice[line][0] == '1' && matrice[line][5] == '2')
		return(1);
	if (matrice[line][0] == '1' && matrice[line][5] == '3')
		return(2);
	if (matrice[line][0] == '1' && matrice[line][5] == '4')
		return(3);
	if (matrice[line][0] == '2' && matrice[line][5] == '1')
		return(4);
	if (matrice[line][0] == '2' && matrice[line][5] == '2')
		return(5);
	if (matrice[line][0] == '2' && matrice[line][5] == '3')
		return(6);
	if (matrice[line][0] == '3' && matrice[line][5] == '1')
		return(7);
	if (matrice[line][0] == '3' && matrice[line][5] == '2')
		return(8);
	if (matrice[line][0] == '4' && matrice[line][5] == '1')
		return(9);
	else return (0);
}
