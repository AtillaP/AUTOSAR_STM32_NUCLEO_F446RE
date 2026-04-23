#include "stm32f446xx.h"
#include "Port.h"

void Port_Init(void)
{
    // PA5 output
    GPIOA->MODER &= ~(3U << 10);
    GPIOA->MODER |=  (1U << 10);
}
