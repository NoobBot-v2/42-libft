#include "list.h"
#include <stddef.h>

int ft_lstsize(t_list *lst)
{
	int i;

	i = 1;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
