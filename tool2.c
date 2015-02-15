#include "pushswap.h"

void	ft_print(t_pile **pile)
{}

int		ft_isempty(t_pile const **pile)
{
	return (!ft_plsize(pile) ? 0 : 1);
}

void	ft_swap(t_pile *a, t_pile *b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void	ft_push(t_pile **pile, t_pile *elem)
{
	t_pile	*tmp;

	tmp = *alst;
	if (!tmp)
		*alst = new;
	else
	{
		new->prev = tmp;
		*alst = new;
	}
}

void	ft_pop(t_pile **pile)
{

}
