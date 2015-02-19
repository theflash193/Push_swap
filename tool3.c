/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:18:39 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 14:18:55 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t		ft_plsize(t_pile **pile)
{
	size_t	i;
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
	t_pile	*first;
	t_pile	*second;
	t_pile	*last;

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

	if (ft_isempty(pile) || ft_plsize(pile) == 1)
		return ;
	last = *pile;
	while (last)
	{
		before_last = last;
		last = last->prev;
	}
	before_last->prev = NULL;
	last->prev = (*pile)->prev;
	last = *pile;
	*pile = last;
}

int		ispositif(char	*s1, char *s2)
{
	long	i;
	long	j;

	i = ft_atol(s1);
	j = ft_atol(s2);
	if (i > 0 && j > 0)
		return (0);
	return (1);
}
