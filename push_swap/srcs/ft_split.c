/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:40:24 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:34:55 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] )
	{
		if (s[i] != c )
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*word_mall(char const *s, size_t f_occ, size_t l_occ)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc(sizeof(char) * (l_occ - f_occ + 1));
	if (!word)
		return (NULL);
	while (f_occ < l_occ)
	{
		word[i] = s[f_occ];
		f_occ++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**arr_mall(char const*s, char **split, char c)
{
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			index = i;
			while (s[i] != c && s[i])
				i++;
			split[j++] = word_mall(s, index, i);
		}
		else
			i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	split = arr_mall(s, split, c);
	return (split);
}
