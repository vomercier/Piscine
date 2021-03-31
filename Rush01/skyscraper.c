/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 15:07:37 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/21 13:14:11 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int	main(int argc, char **argv)
{
	int 	indice[4];
	char	matrice[6][6];
	int		nb_line;
	
	if (!check_format_arg(argv[1]))
		return (0);
	if (argc != 2)
		return (0);
	indice[0] = 3;
	indice[1] = 3;
	indice[2] = 3;
	indice[3] = 3;
	nb_line = 1;

	while nb_line < 5;
	{
		if (ft_write_line(matrice, nb_line, indice[nb_line - 1])
		{
			if (!(ft_absent_colonne(nb_line, matrice))
				indice[nb_line - 1]++;
			else 
			{
				if (nb_line > 1)
					nb_line = nb_line - 1;
				else
					return (0);
			}
		}
	}
	return (0);
}
