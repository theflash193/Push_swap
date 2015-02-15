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
