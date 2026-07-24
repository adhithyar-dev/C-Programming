#include<stdio.h>
void modify(int*p ,int size)
{
    for(int i =0;i< size ; i++)
    {
        p[i]=p[i]*2;
    }    
}
int main(void)
{
    int numbers[3]={5,10,15};
    modify(numbers,3);
    for(int i=0;i<3;i++)
    {
        printf("%d\n",numbers[i]);

    }
    return 0;
}