/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:25:58 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/29 17:34:44 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int ft_strlen(char* str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char* ft_strrev(char* str)
{
	int size;
	int i;
	char tmp;

	size = ft_strlen(str);
	size--;
	i = 0;
	while (i < size)
	{
		tmp = str[i];
		str[i] = str[size];
		str[size] = tmp;
		i++;
		size--;
	}
	return (str);
}

int ft_is_in_base(char c, char* base)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] == '\0')
		return (0);
	else
		return (1);
}

int ft_get_int_from_base(char c, char* base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int skip_whitespace_minus(char* str, int* ptr_i)
{
	int minus_count;
	int i;

	i = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' ||
			str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	minus_count = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		minus_count++;
		i++;
	}
	*ptr_i = i;
	return (minus_count);
}

int ft_check_base(char* base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\f' ||
				base[i] == '\t' || base[i] == ' ' || base[i] == '\n' ||
				base[i] == '\r' || base[i] == '\v' || base[i] < 32 ||
				base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int ft_malloc(char** nbr_c, int* sign, long* nbr_l, int* nbr)
{
	if (!(*nbr_c = (char*)malloc(sizeof(char) * 40)))
		return (0);
	*sign = 1;
	if (*nbr == 0)
		(*nbr_c)[0] = '0';
	if (*nbr < 0)
	{
		*nbr_l = *nbr;
		*nbr_l *= -1;
		*sign = -1;
	}
	else
	*nbr_l = *nbr;
	return (1);
}

char* ft_getnbr_base(int nbr, char* base)
{
	long nbr_l;
	char* nbr_c;
	int base_divider;
	int i;
	int sign;

	if (!(ft_malloc(&nbr_c, &sign, &nbr_l, &nbr)))
		return (0);
	base_divider = ft_strlen(base);
	if (nbr_c[0] == '0')
		i = 1;
	else
		i = 0;
	while (nbr_l > 0)
	{
		nbr_c[i++] = base[nbr_l % base_divider];
		nbr_l /= base_divider;
	}
	if (sign == -1)
		nbr_c[i++] = '-';
	nbr_c[i] = '\0';
	return (ft_strrev(nbr_c));
}

int ft_atoi_base(char* str, char* base)
{
	int i;
	int sign;
	int result;
	int base_divider;

	i = 0;
	while (base[i])
		i++;
	base_divider = i;
	result = 0;
	sign = 1;
	if (skip_whitespace_minus(str, &i) % 2)
		sign = -1;
	while (str[i] && ft_is_in_base(str[i], base))
	{
		result *= base_divider;
		result += ft_get_int_from_base(str[i], base);
		i++;
	}
	result *= sign;
	return (result);
}

char* ft_convert_base(char* nbr, char* base_from, char* base_to)
{
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	return (ft_getnbr_base(ft_atoi_base(nbr, base_from), base_to));
}

