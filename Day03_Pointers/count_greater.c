#include<stdio.h>
int countgreater(int*p,int size, int limit)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(p[i]>limit)
        {
            count++;
        }
    }
    return count;
}
int main(void)
{
    int numbers[7]={80, 20, 60, 10, 75, 50, 95};
    int result=countgreater(numbers,7,70);
    printf("The number of elements greater than 70 in an array is =%d\n",result);
}