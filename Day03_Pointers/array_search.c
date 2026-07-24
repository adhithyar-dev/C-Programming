#include <stdio.h>

int search(int *p,int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(p[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main(void)
{
    int numbers[6]={20,50,90,80,10,30};
    int result=search(numbers,6,99);
   if(result==-1)
   {
    printf("The number is not found in an array\n");
   }
   else
   {
    printf("The number is found at index=%d\n",result);
   }
}