#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size);
	
int		main(void)
{
	int a[6] = {9, 7, 6, 4, 5, 10};
	int i = 0;
	int size = 6;

	sort_int_tab(a, size);
	while (i < size)
		printf("%d\n", a[i++]);
	return (0);
}
