#include<stdio.h>
#include<stdint.h>
int main(void)
{
    uint8_t register_value = 0x00;

    register_value |=(1u<<3);

    printf("After SET Bit 3:0x%02X\n",register_value);

    register_value |= (1U << 5);

    printf("After SET Bit 5: 0x%02X\n", register_value);

    register_value &= ~(1U << 3);

    printf("After CLEAR Bit 3: 0x%02X\n", register_value);

    register_value^=(1u<<5);

    printf("After TOGGLE Bit 5:0x%02X\n", register_value);

    register_value |=(1u<<2);

    if(register_value &(1u<<2))
    {
        printf("Bit is SET\n");

    }
    else
    {
        printf("Bit is CLEAR\n");

    }
    return 0;
}