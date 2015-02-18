/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:58:14 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/18 11:04:20 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"

void	pushswap(char **argv)
{
	t_pile	*a;
	t_pile	*b;
	t_list	*list_operator;

	a = NULL;
	b = NULL;
	list = NULL;
	parsing(argv, &a);
	algo(a, b, list_operator);
}