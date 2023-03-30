#include <stdio.h>

unsigned char swap_bits(unsigned char c);

int main(void)
{
	char letter_t;
	char letter_G;
	letter_t = 't';
	letter_G = 'G';

	printf("letter_t after swap: %c", swap_bits(letter_t));
	printf("\n");
	printf("letter_G after swap: %c", swap_bits(letter_G));
	printf("\n");
	return (0);
}
