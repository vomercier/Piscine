/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:50:30 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/30 18:16:29 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		addition(int nb1, int nb2);
int		soustraction(int nb1, int nb2);
int		multiplication(int nb1, int nb2);
int		division(int nb1, int nb2);
int		modulo(int nb1, int nb2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
void	ft_do_op(char **argv, int nb1, int nb2);
int		exceptions(char sign, int nb2);

#endif
