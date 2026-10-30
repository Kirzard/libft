/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:56:33 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/30 16:43:51 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				last;
	unsigned char	ch;

	i = 0;
	last = -1;
	ch = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == ch)
			last = i;
		i++;
	}
	if (ch == '\0')
		last = i;
	if (last == -1)
		return (NULL);
	return ((char *)&s[last]);
}
