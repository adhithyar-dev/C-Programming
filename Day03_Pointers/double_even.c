#include<stdio.h>
void double_even(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (p[i] % 2 == 0)
        {
            p[i] = p[i] * 2;
        }
    }
}
int main(void)
{
    int numbers[6] = {5, 12, 17, 20, 24, 31};

    double_even(numbers, 6);

    printf("{");

    for (int i = 0; i < 6; i++)
    {
        printf("%d", numbers[i]);

        if (i < 5)
        {
            printf(", ");
        }
    }

    printf("}\n");

    return 0;
}
