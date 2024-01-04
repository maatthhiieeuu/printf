/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:35:01 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/11 09:14:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i_s;

	i_s = 0;
	count = 0;
	while (s[i_s] != '\0')
	{
		while (s[i_s] == c)
			i_s++;
		if (s[i_s] != '\0')
			count++;
		while (s[i_s] && (s[i_s] != c))
			i_s++;
	}
	return (count);
}

static char	**free_tab(char **tab, int i)
{
	while (i-- > 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

static char	**fill_tab(char const *s, char c, char **tab, int word_count)
{
	int	start_w;
	int	i_s;
	int	j_tab;

	i_s = 0;
	j_tab = 0;
	while (s[i_s] && j_tab < word_count)
	{
		while (s[i_s] && s[i_s] == c)
			i_s++;
		start_w = i_s;
		while (s[i_s] && s[i_s] != c)
			i_s++;
		tab[j_tab] = ft_substr(s, start_w, i_s - start_w);
		if (!tab[j_tab])
			return (free_tab(tab, j_tab));
		j_tab++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	tab = ft_calloc((word_count + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	return (fill_tab(s, c, tab, word_count));
}
//	 creer des sous chaine grace au separateur specifier dan les parametres
