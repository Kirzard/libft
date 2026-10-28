/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:11:01 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/28 14:07:20 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;
	t_list	*next;

	if (!lst || !del)
		return ;
	elem = *lst;
	while (elem)
	{
		del(elem->content);
		next = elem->next;
		free(elem);
		elem = next;
	}
	*lst = NULL;
}
