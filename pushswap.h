/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:53:04 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 12:00:44 by grass-kw         ###   ########.fr       */
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
	struct s_op		*next;
}					t_op;

typedef struct		s_env
{
	t_pile			*a;
	t_pile			*b;
	t_op			*list_operator;
}					t_env;

/*
*** tool.c
*/
t_pile				*ft_pl_elem(int content);
void				ft_piledel(t_pile **alst);
void				ft_piledelone(t_pile **alst);
void				ft_pilepushback(t_pile **pile, t_pile *elem);
size_t				ft_tablen(char **tab);

/*
*** tool2.c
*/
void				ft_print(t_pile **pile);
int					ft_isempty(t_pile **pile);
void				ft_push(t_pile **pile, t_pile *elem);
void				ft_swap(t_pile **a);
t_pile				*ft_pop(t_pile **pile);

/*
*** tool3.c
*/
size_t				ft_plsize(t_pile **pile);
t_pile				*ft_reverse(t_pile **pile);
int					ispositif(char	*s1, char *s2);

/*
*** tool4.c
*/
t_op				*ft_opnew(char *content);
void				ft_opback(t_op **alst, t_op *elem);
void				ft_opprint(t_op *op);
void				ft_opdel(t_op **alst);
void				ft_opdelone(t_op **alst);

/*
*** operator.c
*/
void				pa(t_env *e);
void				pb(t_env *e);
void				ra(t_env *e);

/*
*** pushswap.c
*/
void				pushswap(char **argv);

/*
*** check.c
*/
int 				check(char **argv);
void				ft_error(void);
long				ft_atol(const char *str);

/*
*** algo.c
*/
void				tri_selection(t_env *e);
int					iscroissant(t_pile **pile)

#endif
