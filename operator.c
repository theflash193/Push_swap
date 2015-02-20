/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:15:37 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/20 15:08:35 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_pile **a, t_pile **b, t_op *list_operator)
{
	(void)list_operator;
	ft_push(a, ft_pop(b));
}

void	pb(t_pile *b, t_pile *a, t_op *list_operator)
{
	(void)list_operator;
	ft_push(&b, ft_pop(&a));
}

t_pile	*ra(t_pile **a, t_op *list_operator)
{
	(void)list_operator;
	return (ft_reverse(*a));
}
