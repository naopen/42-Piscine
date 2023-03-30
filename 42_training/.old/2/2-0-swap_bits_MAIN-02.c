#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

unsigned char   swap_bits(unsigned char c);
int asciiToBinary(int input);

int	main(void)
{
	char	c;

	c = 't';
	write(1, &c, 1);
	write(1, "\n", 1);
	printf("%08d %c\n", asciiToBinary(toascii(c)), c);
	c = swap_bits(c);
	printf("%08d %c\n", asciiToBinary(toascii(c)), c);
	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}


int asciiToBinary(int input)
{
	int result = 0, i = 1, remainder;

	/* convert decimal to binary format */
	while (input > 0) {
		remainder = input % 2;
		result = result + (i * remainder);
		input = input / 2;
		i = i * 10;
	}

	/* print the resultant binary value */
	return(result);
}
