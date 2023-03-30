#include <stdio.h>

char *ft_strcpy(char *s1, char *s2);

int main(void)
{
    char boy[] = "harry";
    char girl[] = "sally";

    printf("boy is: %s\n", boy);
    printf("girl is: %s\n", girl);
    ft_strcpy(boy, girl);
    printf("boy is: %s\n", boy);
    return (0);
}
