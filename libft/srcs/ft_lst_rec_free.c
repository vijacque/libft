#include "libft.h"

void	ft_lst_rec_free(t_list *first)
{
	if (first)
	{
		ft_lst_rec_free(first->next);
		free(first);
	}
}
