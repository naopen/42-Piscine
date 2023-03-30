#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

void ft_putnbr(int n)
{
	if (n > 2147483647 || n < -2147483648)
		return;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 12);
		return;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		return;
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return;
}

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	main(int ac, char **av)
{
	int	*s;
	int	n;
	int	min;
	int	max;

	if (ac != 3)
		return (0);
	min = ft_atoi(av[1]);
	max = ft_atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;

	s = ft_range(min, max);
	while (*s && n--)
	{
		ft_putnbr(*s++);
		ft_putchar('\n');
	}
	return (1);
}
