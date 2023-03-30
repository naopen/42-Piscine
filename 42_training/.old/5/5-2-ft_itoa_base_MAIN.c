#include <stdio.h>
#include <stdlib.h>

/*
** Usage: a.out 23435453 16
**        a.out 23435453 2
**        a.out 23435453 10
**        a.out 23435453 8
*/

int	ft_atoi(const char *str);
char    *ft_itoa_base(int value, int base);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	}
}
