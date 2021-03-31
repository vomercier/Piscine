/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:23:22 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/18 16:37:43 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int signe;
	int nb;

	signe = 1;
	nb = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' ||
		*str == '\t' || *str == '\v')
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			signe = signe * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = (nb * 10) + (*str - 48);
		str++;
	}
	return (nb * signe);
}
