/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:00:02 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/25 13:05:33 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int		ft_is_word(char c, char cbefore, char *charset)
{
	return (!ft_is_separator(c, charset) && ft_is_separator(cbefore, charset));
}

int		ft_count_words(char *str, char *charset)
{
	int n_words;
	int i;

	i = 0;
	n_words = 0;
	while (str[i] != '\0')
	{
		if (ft_is_word(str[i], str[i - 1], charset) ||
		(!ft_is_separator(str[i], charset) && i == 0))
			n_words++;
		i++;
	}
	return (n_words);
}

int		*ft_get_words_size(char *str, char *charset)
{
	int index;
	int i;
	int n_words;
	int *words_size;

	i = 0;
	n_words = ft_count_words(str, charset);
	words_size = malloc(n_words * sizeof(int));
	while (i <= n_words)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_separator(str[i], charset))
			words_size[index]++;
		else if (i > 0 && !ft_is_separator(str[i - 1], charset))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*words_size;

	words = malloc((ft_count_words(str, charset) + 1) * sizeof(char*));
	words_size = ft_get_words_size(str, charset);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!ft_is_separator(str[i], charset))
		{
			if (i == 0 || ft_is_word(str[i], str[i - 1], charset))
				words[index] = malloc(words_size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (i > 0 && !ft_is_separator(str[i - 1], charset) && ++index)
			j = 0;
	}
	words[ft_count_words(str, charset)] = 0;
	return (words);
}
