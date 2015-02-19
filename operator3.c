/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:16:23 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 10:27:39 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rrr(t_pile *a, t_pile *b, t_list *list_operator)
{
	(void)list_operator;
	rra(&a, list_operator);
	rrb(&b, list_operator);
}
