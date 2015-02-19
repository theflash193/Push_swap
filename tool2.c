/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:18:26 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 10:43:26 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_print(t_pile **pile)
{
	t_pile	*tmp;

	ft_putendl("Pile (Tete): ");
	tmp = *pile;
	while (tmp)
	{
		ft_putnbr(tmp->content);
		ft_putstr(" ");
		tmp = tmp->prev;
	}
	ft_putendl("");
}

int		ft_isempty(t_pile **pile)
{
	return (!ft_plsize((t_pile **)pile) ? 0 : 1);
}

void	ft_swap(t_pile **pile)
{
	t_pile *first;
	t_pile	*second;
	int		tmp;

	if (ft_plsize(pile) < 2)
		return ;
	first = *pile;
	second = first->prev;
	tmp = first->content;
	first->content = second->content;
	second->content = tmp;
}

void	ft_push(t_pile **pile, t_pile *elem)
{
	t_pile	*tmp;

	tmp = *pile;
	if (!tmp)
		*pile = elem;
	else
	{
		elem->prev = tmp;
		*pile = elem;
	}
}

t_pile	*ft_pop(t_pile **pile)
{
	t_pile *tmp;

	tmp = *pile;
	if (!tmp)
		return (NULL);
	if (ft_isempty(pile))
		return (NULL);
	if (ft_plsize(pile) == 1)
	{
		*pile = NULL;
		return (tmp);
	}
	*pile = tmp->prev;
	return (tmp);
}
