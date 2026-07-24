#include<stdio.h>
int main(void)
{
    int speed=60;
    printf("Value:%d\n",speed);
    printf("Address:%p\n",(void*)&speed);
    return 0;
}