/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:15:25 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/19 14:30:43 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_error()
{
	ft_putendl("Error");
}

long	ft_atol(const char *str)
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
		if (!ft_isdigit(str[i]) && str[i] != '+' && str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

static	int	doublon(char **av)
{
	int		i;
	int		j;

	if ((ft_tablen(av) - 1) == 1)
		return (0);
		i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) == 0 || (ispositif(av[i], av[j]) == 0))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check(char **argv)
{
	int		i;
	long 	l;
	int		ret;

	i = 1;
	if (doublon(argv))
		return (1);
	while (argv[i])
	{
		if (!check_digit(argv[i]))
			return (1);
		l = ft_atol(argv[i]);
		if (!(ret = (l > -32767 && l < +32767)))
			return (1);
		i++;
	}
	return (0);
}
