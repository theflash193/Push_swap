/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:58:14 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 18:31:01 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	envdel(t_env *e)
{
	ft_piledel(&(e->a));
	ft_opdel(&(e->list_operator));
}

static void	parsing(char **argv, t_env *e)
{
	int i;

	i = 1;
	while (argv[i])
	{
		ft_pilepushback(&(e->a), ft_pl_elem(ft_atoi(argv[i])));
		i++;
	}
}

static void	algo(t_env *e)
{
	if (ft_pltest(&(e->a), isdecroissant))
		return ;
	else if (ft_plsize(&(e->a)) == 3 && ft_pltest(&(e->a), iscroissant))
		{
			tri_inverse(e);
			return ;
		}
	else if (test_swap(e))
		return ;
	else if (test_rotate(e))
		return ;
	// else if (test_rrotate(e))
	// 	return ;
	else
	{
		// ft_print(&(e->a));
		tri_selection(e);
	}
}

void	pushswap(char **argv)
{
	t_env e;

	e.a = NULL;
	e.b = NULL;
	e.list_operator = NULL;
	parsing(argv, &e);
	algo(&e);
	ft_opprint(e.list_operator);
	envdel(&e);
}
