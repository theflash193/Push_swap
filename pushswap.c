#include "pushswap.h"

void	pushswap(char **argv)
{
	t_pile	*a;
	t_pile	*list_operator;
	t_pile	*b;

	a = NULL;
	b = NULL;
	list_operator = NULL;
	parsing(&a, argv);
	algo(a, b, list_operator);
}
