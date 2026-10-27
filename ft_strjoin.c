/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:52:13 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/27 13:59:05 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (lens2 + lens1 + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, lens1 + 1);
	ft_strlcat(res, s2, lens1 + lens2 + 1);
	return (res);
}
/*int	main(void)
{
	char s1[] = "1111   ";
	char s2[] = "   2222";
	char *s3;

	s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	free(s3);
}*/