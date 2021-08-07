void	ft_delete(t_list *list, void (*del)(void))
{
	while (list)
	{
		(*del)(list->content);
		list = list->next;
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	ft_delete(*lst, del);
	*lst = NULL;
}
