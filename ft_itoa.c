/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:49:53 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/27 14:03:16 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n, unsigned int *n2)
{
	int	res_size;

	res_size = 0;
	if (n == 0)
	{
		*n2 = n;
		return (1);
	}
	if (n < 0)
	{
		res_size++;
		*n2 = n * -1;
		n *= -1;
	}
	else
		*n2 = n;
	while (n != 0)
	{
		n /= 10;
		res_size++;
	}
	return (res_size);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				res_size;
	int				i;
	unsigned int	n2;

	res_size = int_len(n, &n2);
	res = malloc(sizeof(char) * (res_size + 1));
	if (!res)
		return (0);
	res[res_size] = 0;
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
		res[0] = '-';
	i = res_size - 1;
	while (n2 > 0)
	{
		res[i] = (n2 % 10) + '0';
		n2 /= 10;
		i--;
	}
	return (res);
}
