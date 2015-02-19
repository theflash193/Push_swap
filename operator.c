/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:15:37 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 10:33:27 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_pile **a, t_list *list_operator)
{
	(void)list_operator;
	ft_swap(a);
	// ft_pilepushback(*list_operator, ft_pl_elem("sa", sizeof(char) * 2));
}

void	sb(t_pile **b ,t_list *list_operator)
{
	(void)list_operator;
	ft_swap(b);
}

void	ss(t_pile **a, t_pile **b, t_list *list_operator)
{
	(void)list_operator;
	sa(a, list_operator);
	sb(b, list_operator);
}

void	pa(t_pile *a, t_pile *b, t_list *list_operator)
{
	(void)list_operator;
	ft_push(&a, ft_pop(&b));
}

void	pb(t_pile *b, t_pile *a, t_list *list_operator)
{
	(void)list_operator;
	ft_push(&b, ft_pop(&a));
}
