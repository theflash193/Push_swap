/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:04:45 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 13:22:52 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	iscroissant(int a, int b)
{
	return (a < b ? 1 : 0);
}

int isdecroissant(int a, int b)
{
	return (a > b ? 1 : 0);
}

int	ft_pltest(t_pile **pile, int (*f)(int , int))
{
	t_pile	*tmp;

	tmp = *pile;
	while (tmp->prev)
	{
		if (f(tmp->content, tmp->prev->content))
			return (0);
		tmp = tmp->prev;
	}
	return (1);
}

t_pile	*ft_plcpy(t_pile *pile)
{
	t_pile	*ret;
	t_pile	*tmp;

	tmp = pile;
	ret = ft_pl_elem(tmp->content);
	tmp = tmp->prev;
	while (tmp)
	{
		ft_pilepushback(&ret, ft_pl_elem(tmp->content));
		tmp = tmp->prev;
	}
	return (ret);
}