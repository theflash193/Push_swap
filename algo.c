/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:14:56 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 15:21:46 by grass-kw         ###   ########.fr       */
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

void		tri_selection(t_env *e)
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

int			test_swap(t_env *e)
{
	ft_swap(&(e->a));
	if (ft_pltest(&(e->a), isdecroissant))
	{
		ft_opback(&(e->list_operator), ft_opnew("sa"));
		ft_print(&(e->a));
		return (1);
	}
	ft_swap(&(e->a));
	return (0);
}

int			test_rotate(t_env *e)
{
	t_pile	*tmp;

	ft_print(&(e->a));
	tmp = ft_reverse(&(e->a));
	if (ft_pltest(&tmp, isdecroissant))
	{
		ft_opback(&(e->list_operator), ft_opnew("ra"));
		ft_print(&(tmp));
		return (1);
	}
	ft_print(&(tmp));
	return (0);
}
