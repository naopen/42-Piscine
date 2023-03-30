#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
	
int main(void)
{
	char hero[] = "pacman";
	char villian [] = "frogger";

	ft_strcpy(hero, villian);
	printf("%s\n", hero);
	return 0;
}
