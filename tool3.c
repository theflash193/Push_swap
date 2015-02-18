/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:18:39 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/18 10:47:40 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_reverse(t_pile **pile)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (ft_isempty(pile) || ft_plsize(pile) == 1)
		return ;
	first = *pile;
	second = first->prev;
	last = first;
	while (last)
		last = last->prev;
	last->prev = first;
	first->prev = NULL;
	*pile = second;
}

void	ft_rreverse(t_pile **pile)
{
	t_pile	*before_last;
	t_pile	*last;

	if (ft_isempty(a) || ft_plsize(a) == 1)
		return ;
	last = *pile;
	while (last)
	{
		before_last = last;
		last = last->prev;
	}
	before_last = NULL;
	last->prev = *pile->prev;
	last = *pile;
	*pile = last;
}
