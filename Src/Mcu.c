#include "stm32f446xx.h"
#include "Mcu.h"

#define GPIOAEN (1U<<0)

void Mcu_Init(void)
{
    RCC->AHB1ENR |= GPIOAEN;
}
