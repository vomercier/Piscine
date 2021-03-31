/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:21:24 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/30 17:38:51 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	addition(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int	soustraction(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int	multiplication(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int	division(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int	modulo(int nb1, int nb2)
{
	return (nb1 % nb2);
}
