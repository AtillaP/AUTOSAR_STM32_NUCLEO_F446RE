#include "stm32f446xx.h"
#include "LedTask.h"

volatile uint32_t OsTick = 0;

void SysTick_Handler(void)
{
    OsTick++;
}

void StartOS(void)
{
    uint32_t last = 0;

    while(1)
    {
        if((OsTick - last) >= 500)
        {
            last = OsTick;
            LedTask();
        }
    }
}