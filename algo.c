/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:14:56 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/23 15:06:32 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static	int	ft_min(t_pile *pile, int min)
{
	t_pile	*tmp;
	int		min2;
	int		iter;
	int		i;

	tmp = pile->prev;
	i = 1;
	min2 = min;
	while (tmp)
	{
		if (tmp->content < min2)
		{
			min2 = tmp->content;
			iter = i;
		}
		i++;
		tmp = tmp->prev;
	}
	return (min == min2 ? 0 : iter);
}

void		algo(t_env *e)
{
	int	size;
	int	iter;

	while (!ft_isempty(&(e->a)))
	{
		iter = ft_min(e->a, e->a->content);
		while (iter)
		{
			ra(e);
			iter--;
		}
		pb(e);
	}
	size = ft_plsize(&(e->b));
	while (size--)
		pa(e);
}
