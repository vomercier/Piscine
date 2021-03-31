/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:11:52 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/14 14:06:22 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(char corner, char middle, int larg)
{
	ft_putchar(corner);
	while (larg-- > 2)
		ft_putchar(middle);
	if (larg == 1)
		ft_putchar(corner);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		ft_line('A', 'B', x);
		while (y-- > 2)
			ft_line('B', ' ', x);
		if (y == 1)
			ft_line('C', 'B', x);
	}
}
