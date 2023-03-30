#include <unistd.h>

void print_memory(const void *addr, size_t size);

int main(void)
{
    char tab[] = {48,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    print_memory(tab, sizeof(tab));
    return 0;
}
