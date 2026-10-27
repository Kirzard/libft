/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:57:37 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/27 16:33:01 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start < end && is_set(s1[start], set))
		start++;
	while (end > start && is_set(s1[end], set))
		end--;
	if (start == end && is_set(s1[start], set))
		res = ft_substr(s1, 0, 0);
	else
		res = ft_substr(s1, start, end - start + 1);
	if (!res)
		return (NULL);
	return (res);
}
