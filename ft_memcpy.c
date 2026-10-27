/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:51:30 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/21 19:05:22 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (((unsigned char *)dest));
}
/*void    main(void)
{
    unsigned char src[] = "les lapin sont cuits";
    unsigned char *dest;

    
    dest = ft_memcpy(src+2, src, 10);
    write(1, dest, 10);
    write(1, "\n", 1);
    write(1, src, 10);
    write(1, "\n", 1);
}*/