/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:58:14 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 12:37:44 by grass-kw         ###   ########.fr       */
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
	if (iscroissant(&(e->a)))
		return ;
	else if (test_swap(e))
		sa(e);
	else if (test_rotate(e))
		ra(e);
	else if (test_rrotate(e))
		rra(e);
	else
		tri_selection(e);
}

void	pushswap(char **argv)
{
	t_env e;

	e.a = NULL;
	e.b = NULL;
	e.list_operator = NULL;
	parsing(argv, e);
	tri_selection(&e);
	ft_opprint(e.list_operator);
	envdel(&e);
}
