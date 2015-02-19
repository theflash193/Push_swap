/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:58:14 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 15:10:43 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	parsing(char **argv, t_pile **pile)
{
	int i;

	i = 0;
	while (argv[i])
	{
		ft_pilepushback(pile, ft_pl_elem(ft_atoi(argv[i])));
		i++;
	}
}

void	pushswap(char **argv)
{
	t_pile	*a;
	t_pile	*b;
	t_list	*list_operator;

	a = NULL;
	b = NULL;
	list_operator = NULL;
	parsing(argv, &a);
	algo(a, b, list_operator);
}