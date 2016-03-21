#include "libft.h"

void	ft_lst_foreach(t_list *lst, void (*f)())
{
	t_list *tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
}
