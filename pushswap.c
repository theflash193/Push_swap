/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:17:49 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/17 13:17:51 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pushswap(char **argv)
{
	t_pile	*a;
	t_pile	*list_operator;
	t_pile	*b;

	a = NULL;
	b = NULL;
	list_operator = NULL;
	parsing(&a, argv);
	algo(a, b, list_operator);
}
