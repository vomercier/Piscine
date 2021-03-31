/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 08:17:55 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/19 15:44:01 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
	unsigned int dest_len;
	unsigned int i;
	unsigned int ret;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (!size)
		return (src_len);
	if (size < dest_len + 1)
		ret = size + src_len;
	else
		ret = src_len + dest_len;
	i = 0;
	while (src[i] && (i + dest_len) < (size - 1))
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (ret);
}
