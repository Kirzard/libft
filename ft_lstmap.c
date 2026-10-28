/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:35:35 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/28 14:07:06 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*clear_list(t_list *newlist, void (*del)(void *))
{
	ft_lstclear(&newlist, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelem;
	void	*fcontent;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		fcontent = f(lst->content);
		newelem = ft_lstnew(fcontent);
		if (!newelem)
		{
			free(fcontent);
			return (clear_list(newlist, del));
		}
		ft_lstadd_back(&newlist, newelem);
		if (ft_lstlast(newlist) != newelem)
		{
			free(newelem);
			return (clear_list(newlist, del));
		}
		lst = lst->next;
	}
	return (newlist);
}
