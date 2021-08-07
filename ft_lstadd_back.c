void	ft_addlast(t_list *alst, t_list *new)
{
	while (alst)
		alst = alst->next;
	alst = new;
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	ft_addlast(*alst, new);
}
