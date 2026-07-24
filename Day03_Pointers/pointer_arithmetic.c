#include<stdio.h>
int main(void)
{
    int x=10;
    int *p=&x;
    print("p=%p\n",(void*)p);
    p++;
    printf("p+1==%p\n",(void*)p);
    return 0;
}