/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:17:09 by vmercier          #+#    #+#             */
/*   Updated: 2021/03/27 17:36:25 by vmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char **cut_str(char*str)
{
	char **groups;
	int i;
///// a completer



char *solve3(char *str)
{
	int i;
	char *group;
	char *tab_groups[4];
	char sep;

	if (str[0] = '0')
	{
		tab_groups[0] = '\0';
		tab_groups[1] = '\0';
	}
	else
	{
		tab_groups[0] = get_word(str[0]);// a voir comment on cherche dans le fichier avec str[0]
		tab_groups[1] = get_word("100");
	}
	if (str[1] < '2')
	{
		tab_groups[2] = get_word2(str[1], str[2]);// a voir dans dico en fonction de str[1] et str[2]
		tab_groups[3] = '\0';
	}
	else
	{
		tab_groups[2] = get_word2(str[1], "0");//a voir dans dico en fonction de str1 + '0' a la fin
		tab_groups[3] = get_word(str[2]);// a voir dans dico en fonction de str[2]
	}
	sep = ' ';
	group = strjoin(4, tab_groups, sep);
	return (group);
}

char *solve12(char *str, int mod_groups)
{
	char *tab_groups[2];
	char sep;

	if (mod_groups == 1)
		tab_groups[0] = get_word(str[0]);// avoir pour recherche dico en fonction de str[0]
		tab_groups[1] = '\0';
	else (mod_groups == 2)
	{
		if (str[0] == 1)
		{
			tab_groups[0] = get_word2(str[0], str[1]);// a voir pour recher dico sur 2 caracteres
			tab_groups[1] = '\0';
		}
		else 
		{
			tab_groups[0] = get_word2(str[0], "0");// a voir en fonction de str[0]
			tab_groups[1] = get_word(str[1]);// a voir en fonction de str[1]
		}
	}
	sep = ' ';
	group = strjoin(2, tab_groups, sep);
	return (group);
}
	

char *solve(char *str)
{
	int n_groups;
	int mod_groups;
	int i;
	char *groups;
	char *words_blocs;
	char sep;
	char *str_letters;

	n_groups = ft_strlen(*str) / 3;
	mod_groups = ft_strlen(*str) % 3;
	i = 0;
	if (mod_groups != 0)
		n_groups = n_groups + 1;
	groups = malloc(sizeof(*char) * n_groups);
	// decouper la chaine en blocs de 3 (+ 1 blocs de 1 oi 2 eventuellement)
	// voir pour separer en 2 fonctions pour rester en dessous des 25 lignes
	words_blocs = malloc(sizeof(*char) * (2 * n_groups - 1));
	if (mod_groups != 0)
		words_blocs[0] = solve12(groups[0]);
	else
		words_blocs[0] = solve3(groups[0]);
	while (i++ < n_groups)
		words_blocs[2 * i] = solve3(gourps[i]);
	if (n_groups == 4)
	{
		word_blocs[1] = get_word("1000000000");
		word_blocs[3] = get_word("1000000");
		word_blocs[5] = get_word("1000");
	}
	if (n_groups == 3)
	{
		word_blocs[1] = get_word("1000000");
		word_blocs[3] = get_word("1000");
	}
	if (n_groups == 2)
		word_blocs[1] = get_word("1000");
	sep = ' ';
	str_letters = strjoin(2*n_gourps-1, word_blocs, sep);
	return (str_letters);
}





