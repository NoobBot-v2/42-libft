/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 22:33:24 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/16 23:11:51 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*prev_node;
	t_list	*new_node;

	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	prev_node = new_lst;
	lst = lst->next;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		prev_node->next = new_node;
		prev_node = new_node;
		lst = lst->next;
	}
	return (new_lst);
}
