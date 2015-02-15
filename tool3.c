#include "pushswap.h"

int		ft_plsize(t_pile **pile)
{
	int	i;
	t_pile	*tmp;

	i = 0;
	tmp = *pile;
	while (tmp)
	{
		tmp = tmp->prev;
		i++;
	}
	return (i);
}
