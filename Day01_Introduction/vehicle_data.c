#include <stdio.h>

#include <stdint.h>

int main(void)
{
    uint8_t vehicle_speed = 60;
    uint16_t engine_rpm = 2500;
    int8_t outside_temperature = -5;
    char gear = 'D';
    float battery_voltage = 12.6f;
    printf("vehicle speed:%u km/h\n", vehicle_speed);
    printf("engine rpm:%u rpm\n", engine_rpm);
    printf("outside temperature:%d c\n", outside_temperature);
    printf("Gear: %c\n", gear);
    printf("Battery Voltage: %.1f V\n", battery_voltage);
    return 0;
}