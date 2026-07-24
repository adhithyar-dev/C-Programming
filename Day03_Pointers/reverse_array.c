#include<stdio.h>
void reverse(int*p,int size)
{
    for(int i=0;i<size/2;i++)
    {
        int temp=p[i];
        p[i]=p[size-i-1];
        p[size-i-1]=temp;
        
    }
}
int main(void)
{
    int numbers[6]={30, 25, 20, 15, 10, 5};
    reverse(numbers,6);
    printf("{");
    for(int i=0;i<6;i++)
    {
        printf("%d",numbers[i]);
        if(i<5)
        {
            printf(",");
        
        }
        

    }
    printf("}");
     
} 