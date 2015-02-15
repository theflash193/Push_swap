#include "pushswap.h"

int 		main(int argc, char const **argv)
{
	if (argc == 1)
	{
		ft_putendl();
		return (0);
	}
	if (!check(argv))
		ft_error();
	pushswap(argv);
	return (0);
}
