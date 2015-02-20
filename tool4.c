/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 13:22:25 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/20 13:22:32 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_op	*ft_opnew(char *content)
{
	t_op	*ret;

	if (!(ret = (t_op *)malloc(sizeof(t_op))))
		return (NULL);
	ft_bzero(ret->content, 4000);
	ft_memcpy(ret->content, content, ft_strlen(content));
	ret->next = NULL;
	return (ret);
}

void	ft_opback(t_op **alst, t_op *elem)
{
	t_op	*tmp;

	tmp = *alst;
	if (!*alst)
		*alst = elem;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = elem;
	}
}

void	ft_opprint(t_op *op)
{
	t_op	*tmp;

	ft_putstr("Pile (Tete): ");
	tmp = op;
	while (tmp)
	{
		ft_putendl(tmp->content);
		tmp = tmp->next;
	}
	ft_putendl("");
}

void	ft_opdel(t_op **alst)
{
	t_op *tmp;
	t_op *tmp2;

	tmp = *alst;
	while (tmp)
	{
		tmp2 = tmp->next;
		ft_opdelone(&tmp);
		tmp = tmp2;
	}
	*alst = NULL;
}

void	ft_opdelone(t_op **alst)
{
	free(*alst);
	*alst = NULL;
}
