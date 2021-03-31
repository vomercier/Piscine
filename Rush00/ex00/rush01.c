/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:19:03 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/14 15:06:42 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(char begin, char middle, char end, int larg)
{
	ft_putchar(begin);
	while (larg-- > 2)
		ft_putchar(middle);
	if (larg == 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		ft_line('/', '*', '\\', x);
		while (y-- > 2)
			ft_line('*', ' ', '*', x);
		if (y == 1)
			ft_line('\\', '*', '/', x);
	}
}
