/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:33:00 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/27 17:36:34 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

#include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		check_str(int argc, char **argv);
void	ft_error(int i);
char	clean_str(char *str);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*get_word(char *str);
char	*get_word2(char *str1, char *str2);
char	**cut_str(char *str);
char	solve(char*str);

#endif
