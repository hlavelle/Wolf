#include "libft.h"

void	ft_lstdelone(t_list **begin_list, void (*del)(void *, size_t))
{
	t_list	*list;

	if (*begin_list && *del)
	{
		list = *begin_list;
		del(list->content, list->content_size);
		free(list);
		*begin_list = NULL;
	}
}
