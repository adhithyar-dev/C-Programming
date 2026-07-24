#include <stdio.h>

int findsmallest(int *p, int size)
{
    int smallest = p[0];

    for (int i = 1; i < size; i++)
    {
        if (p[i] < smallest)
        {
            smallest = p[i];
        }
    }

    return smallest;
}

int main(void)
{
    int numbers[6] = {1, 25, 80, 10, 40, 30};

    int result = findsmallest(numbers, 6);

    printf("The smallest number in an array is = %d\n", result);

    return 0;
}