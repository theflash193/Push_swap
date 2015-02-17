/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:16:39 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/17 13:16:42 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	parsing(char **argv, t_pile **pile)
{
	int i;

	i = 0;
	while (argv[i])
	{
		ft_push(pile, ft_pl_elem(argv[i], sizeof(int)));
		i++;
	}
}
