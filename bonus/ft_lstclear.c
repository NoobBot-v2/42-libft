#include "list.h"
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void*));

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *next_node;
	t_list *current_node;

	if (!lst || !*lst)
		return ;
	current_node = *lst;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node,free);
		current_node = next_node;
	}
	*lst = NULL;
}