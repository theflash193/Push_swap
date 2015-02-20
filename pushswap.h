/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:53:04 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/20 15:07:15 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include "libft.h"

typedef struct		s_pile
{
	int				content;
	struct s_pile	*prev;
}					t_pile;

typedef struct		s_op
{
	char			content[4000];
	struct s_op	*next;
}					t_op;

t_pile	*ft_pl_elem(int content);
void	ft_piledel(t_pile **alst);
void	ft_piledelone(t_pile **alst);
void	ft_pilepushback(t_pile **pile, t_pile *elem);
void	ft_print(t_pile **pile);

/*
*** Pile basic function
*/
int		ft_isempty(t_pile **pile);
void	ft_swap(t_pile **a);
void	ft_push(t_pile **pile, t_pile *elem);
t_pile	*ft_pop(t_pile **pile);
t_pile	ft_first(t_pile const *pile);
size_t	ft_plsize(t_pile **pile);
t_pile	*ft_reverse(t_pile *pile);

/*
*** Pile operator
*/
void	pa(t_pile **a, t_pile **b, t_op *list_operator);
void	pb(t_pile *b, t_pile *a, t_op *list_operator);
t_pile	*ra(t_pile **a, t_op *list_operator);

/*
*** pushswap.c
*/
void	pushswap(char **argv);

/*
*** check.c
*/
int 	check(char **argv);
void	ft_error();
long	ft_atol(const char *str);

/*
*** algo.c
*/
void	algo(t_pile *a, t_pile *b, t_op *list_operator);

/*
*** tool.c
*/
size_t	ft_tablen(char **tab);
int		ispositif(char	*s1, char *s2);

/*
*** tool4.c
*/
t_op	*ft_opnew(char *content);
void	ft_opback(t_op **alst, t_op *elem);
void	ft_opprint(t_op *op);
void	ft_opdel(t_op **alst);
void	ft_opdelone(t_op **alst);

#endif
