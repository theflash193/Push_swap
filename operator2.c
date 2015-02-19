/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:16:13 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 10:27:26 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_pile **a, t_list *list_operator)
{
	(void)list_operator;
	ft_reverse(a);
}

void	rb(t_pile **b, t_list *list_operator)
{
	(void)list_operator;
	ft_reverse(b);
}

void	rr(t_pile *a, t_pile *b, t_list *list_operator)
{
	(void)list_operator;
	ra(&a, list_operator);
	rb(&b, list_operator);
}

void	rra(t_pile **a, t_list *list_operator)
{
	(void)list_operator;
	ft_rreverse(a);
}
void	rrb(t_pile **b, t_list *list_operator)
{
	(void)list_operator;
	ft_rreverse(b);
}
