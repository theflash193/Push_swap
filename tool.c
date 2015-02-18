/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:18:11 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/18 13:02:36 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_pile	*ft_pl_elem(void *content, size_t content_size)
{
	t_pile	*ret;

	if (!(ret = (t_pile *)malloc(sizeof(t_pile))))
		return (NULL);
	ret->content = ft_memalloc(content_size);
	if (!content)
		ret->content = NULL;
	else
		ft_memcpy(ret->content, content, content_size);
	ret->content_size = 0;
	ret->prev = NULL;
	return (ret);
}

void	ft_piledel(t_pile **alst, void (*del)(void *, size_t))
{
	t_pile *tmp;
	t_pile *tmp2;

	tmp = *alst;
	while (tmp)
	{
		tmp2 = tmp->prev;
		ft_piledelone(&tmp, (*del));
		tmp = tmp2;
	}
	*alst = NULL;
}

void	ft_piledelone(t_pile **alst, void (*del)(void *, size_t))
{
	(*del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

void	ft_pilefree(void *content, size_t content_size)
{
	(void)content;
	(void)content_size;
	content = NULL;
	content_size = 0;
}

void	ft_pilepushback(t_pile **pile, t_pile *elem)
{
	t_pile	*tmp;

	tmp = *pile;
	if (!*pile)
		*pile = elem;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;
		tmp->prev = elem;
	}
}
