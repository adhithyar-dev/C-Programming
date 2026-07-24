#include<stdio.h>
int counteven(int*p,int size)
{
    int count=0;
    for(int i =0;i<size;i++)
    {
        if(p[i]%2==0)
        {
            count++;

        }
        
    }
    return count;
}
int main(void)
{
    int numbers[7]={20,40,50,60,70,80,90};
    int result=counteven(numbers,7);
    printf("The number of even elements in an array is =%d\n",result);
}