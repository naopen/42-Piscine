#include <stdio.h>
void ft_swap(int *a, int *b);

int main(void)
{
	int old_age = 223;
	int young_age = 1;
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	ft_swap(&old_age, &young_age);
	printf("swap them ages!\n");
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	return (0);
}
