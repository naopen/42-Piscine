#include <stdio.h>

int is_power_of_2(unsigned int n);

int main(void)
{
	unsigned int num[7];
	num[0] = 0;
	num[1] = 200;
	num[2] = 32;
	num[3] = 256;
	num[4] = 13;
	num[5] = 1000;
	num[6] = 1024;
	int i;

	i = 0;
	while(i <= 6)
	{
	if (is_power_of_2(num[i]))
		printf("%s %d\n", "yep", num[i]);
	else
		printf("%s %d\n", "nope", num[i]);
	i++;
	}
}
