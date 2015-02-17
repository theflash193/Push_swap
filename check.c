/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:15:25 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/17 13:15:27 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ft_error()
{
	ft_putendl(/*error*/);
}

static long	ft_atol(const char *str)
{
	unsigned long	result;
	int				i;

	result = 0;
	i = 0;
	while (ft_ispace(*str))
		str++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		return (-result);
	return (result);
}

static int	check_digit(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) || str[i] != '+' || str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

int	check(char const **argv)
{
	int	i;
	long l;

	i = 0;
	while (argv[i])
	{
		if (!check_digit(argv[i]))
			return (0);
		l = ft_atol(argv[i]);
		if (l > -32767 && l < +32767)
			return (0);
	}
	return (1);
}
