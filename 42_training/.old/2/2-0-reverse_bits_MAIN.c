#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet);

int     main()
{
	printf("%d", reverse_bits(38));
	return (0);
}

/* ******************************************
** echo 00100110 | perl -lpe '$_=pack"B*",$_'
** echo "d" | perl -lpe '$_=unpack"B*"'
** ;; Convert binary to ascii with perl;
**
** echo "&" | perl -lpe '$_=unpack"B*"'
** echo 01100100 | perl -lpe '$_=pack"B*",$_'
** ;; Use perl to convert ascii char to binary
**
** echo "&" | perl -lpe '$_=unpack"B*"' && echo "d" | perl -lpe '$_=unpack"B*"'
** ;; See the bits reversed more easily 
** ******************************************
*/
