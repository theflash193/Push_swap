/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:14:56 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/20 15:10:58 by grass-kw         ###   ########.fr       */
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
		if (tmp->content < iter)
		{
			min2 = tmp->content;
			iter = i;
		}
		i++;
		tmp = tmp->prev;
	}
	return (min == min2 ? 0 : iter);
}

void		algo(t_pile *a, t_pile *b, t_op *list_operator)
{
	int	size;
	int	iter;

	(void)list_operator;
	while (ft_isempty(&a))
	{
		iter = ft_min(a, a->content);
		while (iter--)
			ra(&a, list_operator);
		pb(a, b, list_operator);
	}
	size = ft_plsize(&b);
	while (size--)
		pa(&b, &a, list_operator);
}
