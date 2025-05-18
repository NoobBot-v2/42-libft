/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 22:33:08 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/16 23:11:34 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;
	t_list	*current_node;

	if (!lst || !*lst)
		return ;
	current_node = *lst;
	while (current_node != NULL)
	{
		next_node = current_node -> next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	*lst = NULL;
}
