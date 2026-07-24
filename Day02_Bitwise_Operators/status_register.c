#include<stdio.h>
#include<stdint.h>
int main(void)
{
    uint8_t status_register=0x3D;
    uint8_t mode=(status_register& 0x30)>>4;
    uint8_t enable=(status_register&(1u<<3))>>3;
    uint8_t speed =status_register&0x07;
    printf("Mode:%u\n",mode);
    printf("Enable:%u\n",enable);
    printf("Speed:%u\n",speed);
    return 0;

}