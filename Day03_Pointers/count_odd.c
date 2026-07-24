#include<stdio.h>
int counteven(int*p,int size)
{
    int count=0;
    for(int i =0;i<size;i++)
    {
        if(p[i]%2!=0)
        {
            count++;

        }
        
    }
    return count;
}
int main(void)
{
    int numbers[8]={11, 20, 35, 42, 57, 68, 73, 90};
    int result=counteven(numbers,8);
    printf("The number of odd  elements in an array is =%d\n",result);
}