/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 19:46:44 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/27 17:33:21 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(char const *s, char c)
{
	size_t	i;
	size_t	wordcount;
	size_t	inword;

	i = 0;
	inword = 0;
	wordcount = 0;
	while (s[i])
	{
		if (s[i] == c && inword)
		{
			wordcount++;
			inword = 0;
		}
		else if (s[i] != c && !inword)
			inword = 1;
		i++;
	}
	if (inword)
		wordcount++;
	return (wordcount);
}

static int	safe_malloc(char **split_list, int index)
{
	int	i;

	if (!split_list[index])
	{
		i = 0;
		while (i < index)
		{
			free(split_list[i]);
			i++;
		}
		free(split_list);
		return (1);
	}
	return (0);
}

static char	**fill(char **alloc_list, char const *s, char c)
{
	size_t		i;
	size_t		k;
	size_t		word_len;
	char		**split_list;

	split_list = alloc_list;
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		word_len = 0;
		while (s[i + word_len] && s[i + word_len] != c)
			word_len++;
		split_list[k] = ft_substr(s, i, word_len);
		if (safe_malloc(split_list, k))
			return (NULL);
		i += word_len;
		k++;
	}
	return (split_list);
}

char	**ft_split(char const *s, char c)
{
	char	**split_list;
	size_t	wordcount;

	if (!s)
		return (NULL);
	wordcount = countword(s, c);
	split_list = malloc(sizeof(char *) * (wordcount + 1));
	if (!split_list)
		return (NULL);
	split_list[wordcount] = NULL;
	return (fill(split_list, s, c));
}
