/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadupin <tadupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:35:35 by tadupin           #+#    #+#             */
/*   Updated: 2026/10/27 21:13:21 by tadupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelem;
	void	*fcontent;	

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while(lst)
	{
		fcontent = f(lst->content);
		if (!fcontent)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		newelem = ft_lstnew(fcontent);
		ft_lstadd_back(&newlist, newelem);
		lst = lst->next;
	}
	return (newlist);
}
