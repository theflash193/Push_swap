/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:58:14 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/20 15:14:30 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	parsing(char **argv, t_pile **pile)
{
	int i;

	i = 1;
	while (argv[i])
	{
		ft_pilepushback(pile, ft_pl_elem(ft_atoi(argv[i])));
		i++;
	}
}

void	pushswap(char **argv)
{
	t_env e;

	e.a = NULL;
	e.b = NULL;
	e.list_operator = NULL;
	parsing(argv, e);
	ft_push(&a, ft_pl_elem(4));
	// algo(a, b, list_operator);
	// ft_putstr("algo fini a: ");
	// ft_print(&a);
}
