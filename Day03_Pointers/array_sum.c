#include<stdio.h>
int findsum(int*p,int size)
{
    int sum=0 ;
    for(int i=0;i<size;i++)
    {
        sum = sum+p[i];

    }
return sum;
}
int main(void)
{ 
    int numbers[3]={10,20,30};
    int total =findsum(numbers,3);
    printf("Sum of array element =%d\n",total);
    return 0;
}