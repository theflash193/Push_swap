/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:18:39 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/17 16:30:06 by grass-kw         ###   ########.fr       */
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
	t_pile	*tmp;
	t_pile	*tmp2;
	t_pile	*tmp3;

	if (ft_isempty(pile) || ft_plsize(pile) == 1)
		return ;
	tmp = *pile;
	tmp2 = *pile->prev;
	while (tmp->prev)
		tmp = tmp->prev;

}

void	ft_rreverse(t_pile **pile)
{
	t_pile	*tmp;
	t_pile	*tmp2;

	if (ft_isempty(a) || ft_plsize(a) == 1)
		return ;
	tmp = *pile;
	tmp2 = tmp;
	while (tmp)
		tmp = tmp->prev;
	tmp2 = 
}
