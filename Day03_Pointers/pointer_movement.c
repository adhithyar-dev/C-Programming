#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int *p = numbers;

    printf("First value = %d\n", *p);

    p++;
    printf("After p++ = %d\n", *p);

    p += 2;
    printf("After p += 2 = %d\n", *p);

    p--;
    printf("After p-- = %d\n", *p);

    *p = 100;

    printf("Array = {");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", numbers[i]);

        if (i < 4)
        {
            printf(", ");
        }
    }

    printf("}\n");

    return 0;
}