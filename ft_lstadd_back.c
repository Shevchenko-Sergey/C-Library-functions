#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *current;

	current = (*lst);
	if (lst)
	{
		if (*lst == NULL)
		{
			*lst = new;
			(*lst)->next = NULL;
		}
		else
		{
			while (current->next != NULL)
				current = current->next;
			current->next = new;
			current->next->next = NULL;
		}
	}
}
