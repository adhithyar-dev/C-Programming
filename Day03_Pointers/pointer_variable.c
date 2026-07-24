
#include <stdio.h>

int main(void)
{
    int speed = 60;

    int *ptr = &speed;

    printf("speed      = %d\n", speed);
    printf("&speed     = %p\n", (void *)&speed);

    printf("ptr        = %p\n", (void *)ptr);
    printf("*ptr       = %d\n", *ptr);

    return 0;
}