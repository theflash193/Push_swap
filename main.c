/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:17:22 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 13:24:06 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int 		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putendl("");
		return (0);
	}
	if (check(argv))
	{
		ft_error();
		return (0);
	}
	pushswap(argv);
	return (0);
}
