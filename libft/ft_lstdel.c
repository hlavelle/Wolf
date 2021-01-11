#include "libft.h"

void	ft_lstdel(t_list **begin_list, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*tmp;

	if (*begin_list && *del)
	{
		list = *begin_list;
		while (list)
		{
			tmp = list;
			del(list->content, list->content_size);
			free(list);
			list = tmp->next;
		}
		*begin_list = NULL;
	}
}
