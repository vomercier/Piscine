/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:18:29 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/21 11:18:42 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_check_format_arg(char *str)
{
    int i;

    i = -1;
    if (ft_strlen(str) != 31) ////////////// Y a-t-il bien 16 chiffres et 15 espaces ?
        return (0);
    while (str[++i]) ////////////// N'y a-t-il que des espaces et des chiffres entre 1 et 4 ?
        if (str[i] != 32 && (str[i] < '1' || str[i] > '4'))
            return (0);
    if (str[0] < '1' || str[0] > '4') ////////////// Le premier caractère est-il bien un chiffre entre 1 et 4 ?
        return (0);
    i = 1; ////////////// Les caractères à l'index impair sont-ils bien des espaces et ceux à l'index pair sont-ils bien des chiffres entre 1 et 4 ?
    while (str[i])
    {
        if (str[i] != 32)
            return (0);
        i++;
        if (str[i] < '1' || str[i] > '4')
            return (0);
        i++;
    }
    i = -1; ////////////// La somme des caractères de chaque côté du tableau est-elle bien inférieure à 6 ?
    while (++i < 24)
        if (str[i] + str[i + 8] > ('1' + '4'))
            return (0);
    return (1);
}
