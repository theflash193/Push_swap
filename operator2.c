/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:16:13 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/17 15:45:05 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(t_pile **a, t_pile *list_operator)
{
	(void)list_operator;
	ft_reverse(a);
}

void	rb(t_pile **b, t_pile *list_operator)
{
	(void)list_operator;
	ft_reverse(b);
}

void	rr(t_pile *a, t_pile *b, t_pile *list_operator)
{
	(void)list_operator;
	ra(&a, list_operator);
	rb(&a, list_operator);
}

void	rra(t_pile **a, t_pile *list_operator)
{
	(void)list_operator;
	ft_rreverse(a);
}
void	rrb(t_pile **b, t_pile *list_operator)
{
	(void)list_operator;
	ft_rreverse(b);
}
