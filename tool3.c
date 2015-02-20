/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:18:39 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/20 15:06:22 by grass-kw         ###   ########.fr       */
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

t_pile	*ft_reverse(t_pile *pile)
{
	t_pile	*ret;
	t_pile	*first;
	t_pile	*second;
	t_pile	*last;

	if (ft_isempty(&pile) || ft_plsize(&pile) == 1)
		return (pile);
	first = pile;
	second = first->prev;
	last = pile;
	while (last->prev)
		last = last->prev;
	last->prev = pile;
	first->prev = NULL;
	pile = second;
	ret = pile;
	return (ret);
}

int		ispositif(char	*s1, char *s2)
{
	long	i;
	long	j;

	if (ft_strstr(s1, "+") || ft_strstr(s2, "+"))
	{
		i = ft_atol(s1);
		j = ft_atol(s2);
		if (i == j)
			return (0);
	}
	return (1);
}
