#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char monster[] = "ogrefly";
    printf("%s has %d characters", monster, ft_strlen(monster));
    return (0);
}
