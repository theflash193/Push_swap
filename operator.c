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

void	pa(t_env *e)
{
	ft_opback(e->&list_operator, ft_opnew("pa"));
	ft_push(e->&a, ft_pop(e->&b));
}

void	pb(t_env *e)
{
	ft_opback(e->&list_operator, ft_opnew("pa"));
	ft_push(e->&b, ft_pop(e->&a));
}

void	*ra(t_env *e)
{
	ft_opback(e->&list_operator, ft_opnew("pa"));
	e = ft_reverse(e->a);
}
