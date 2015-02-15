#ifndef PUSH_SWAP
# define PUSH_SWAP
# include "libft.h"

typedef struct		s_pile
{
	void			*content;
	int				content_size:
	struct s_pile	*prev;
}					t_pile;

t_pile	*ft_pl_elem(void *content, int content_size);
void	ft_piledel();
void	ft_piledelone();
void	ft_pilefree(void *content, int content_size);
void	ft_pilepushback(t_pile **pile, t_pile *elem);
void	ft_print(t_pile **pile);

/*
*** Pile basic function
*/
int		ft_isempty(t_pile const **pile);
void	ft_swap(t_pile *a, t_pile *b);
void	ft_push(t_pile **pile, t_pile *elem);
void	ft_pop(t_pile **pile);
t_pile	ft_first(t_pile const *pile);
int		ft_plsize(t_pile **pile);

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
*** check.c
*/
int 	check(char const **argv);
void	ft_error();

/*
*** parsing
*/
void	parsing(char **argv, t_pile **pile);


#endif
