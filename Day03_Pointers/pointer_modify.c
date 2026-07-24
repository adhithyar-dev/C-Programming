#include<stdio.h>
int main(void)
{ 
    int temperature =60;
    int *ptr=&temperature;
    printf("Before\n");
    printf("Temperature = %d\n",temperature);
    printf("*ptr =%d\n",*ptr);
    *ptr=45;
    printf("After\n");
    printf("Temperature = %d\n",temperature);
    printf("*ptr = %d\n",*ptr);
    return 0;
}