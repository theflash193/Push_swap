/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:53:04 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/18 12:59:11 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include "libft.h"

typedef struct		s_pile
{
	void			*content;
	size_t			content_size;
	struct s_pile	*prev;
}					t_pile;

t_pile	*ft_pl_elem(void *content, size_t content_size);
void	ft_piledel();
void	ft_piledelone();
void	ft_pilefree(void *content, size_t content_size);
void	ft_pilepushback(t_pile **pile, t_pile *elem);
void	ft_print(t_pile **pile);
void	ft_reverse(t_pile **pile);
void	ft_rreverse(t_pile **pile);

/*
*** Pile basic function
*/
int		ft_isempty(t_pile const **pile);
void	ft_swap(t_pile **a);
void	ft_push(t_pile **pile, t_pile *elem);
t_pile	*ft_pop(t_pile **pile);
t_pile	ft_first(t_pile const *pile);
size_t	ft_plsize(t_pile **pile);

/*
*** Pile operator
*/
void	sa(t_pile **a, t_pile *list_operator);
void	sb(t_pile **b, t_pile *list_operator);
void	ss(t_pile **a, t_pile **b, t_pile *list_operator);
void	pa(t_pile *a, t_pile *b, t_pile *list_operator);
void	pb(t_pile *b, t_pile *a, t_pile *list_operator);
void	ra(t_pile **a, t_pile *list_operator);
void	rb(t_pile **b, t_pile *list_operator);
void	rr(t_pile *a, t_pile *b, t_pile *list_operator);
void	rra(t_pile **a, t_pile *list_operator);
void	rrb(t_pile **b, t_pile *list_operator);
void	rrr(t_pile *a, t_pile *b, t_pile *list_operator);

/*
*** pushswap.c
*/
void	pushswap(char **argv);

/*
*** check.c
*/
int 	check(char const **argv);
void	ft_error();

/*
*** parsing
*/
void	parsing(char **argv, t_pile **pile);


#endif
