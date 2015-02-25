/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:18:11 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 14:01:31 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_pile	*ft_pl_elem(int content)
{
	t_pile	*ret;

	if (!(ret = (t_pile *)malloc(sizeof(t_pile))))
		return (NULL);
	ret->content = content;
	ret->prev = NULL;
	return (ret);
}

void	ft_piledel(t_pile **alst)
{
	t_pile *tmp;
	t_pile *tmp2;

	tmp = *alst;
	while (tmp)
	{
		tmp2 = tmp->prev;
		ft_piledelone(&tmp);
		tmp = tmp2;
	}
	*alst = NULL;
}

void	ft_piledelone(t_pile **alst)
{
	free(*alst);
	*alst = NULL;
}

void	ft_pilepushback(t_pile **pile, t_pile *elem)
{
	t_pile	*tmp;

	tmp = *pile;
	if (*pile == NULL)
		*pile = elem;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;
		tmp->prev = elem;
	}
}

size_t	ft_tablen(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
