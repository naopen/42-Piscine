#include <unistd.h>

char *g_base = "0123456789abcdef";

void	pc(char c)
{
	write (1, &c, 1);
}

void	pa(unsigned char c)
{
	if (c > 31 && c < 127)
		pc(c);
	else
		pc('.');
}

void	ph(unsigned char c)
{
	pc(g_base[c / 16]);
	pc(g_base[c % 16]);
}

void	pl(unsigned char *tab, size_t beg, size_t max)
{
	size_t	i;
	size_t	end = beg + 16;

	for (i = beg; i < end && i < max; i++)
	{
		ph(tab[i]);
		if (i % 2)	pc(' ');
	}
	for (; i < end; i++)
	{
		pc(' ');
		pc(' ');
		if (i % 2)	pc(' ');
	}
	for (i = beg; i < end && i < max; i++)
		pa(tab[i]);
	pc('\n');
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char *tab;

	tab = (unsigned char *)addr;
	for (size_t c = 0; c < size; c += 16)
		pl(tab, c, size);
}
