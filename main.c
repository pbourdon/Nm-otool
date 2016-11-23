#include "nmotool.h"

int		main(int ac, char **av)
{
	int		ac2;

	ac2 = ac;
	if (ac > 1)
	{
		while (ac2 >= 2)
		{
			ft_parse_and_open(av[ac2 - 1]);
			ac2--;
		}
	}
	else
		ft_parse_and_open("a.out");
	return (0);
}
