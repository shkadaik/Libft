#include "libft.h"

static void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;
	
	tmp = lst->next;
	del(lst->content);
	free(lst);
	lst = tmp;
}
