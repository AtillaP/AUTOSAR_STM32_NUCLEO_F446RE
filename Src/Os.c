#include "stm32f446xx.h"
#include "LedTask.h"

volatile uint32_t OsTick = 0;

void SysTick_Handler(void)
{
    OsTick++;
}

void Os_Init(void)
{
    SysTick->LOAD = 16000 - 1;   // 16 MHz → 1 ms tick
    SysTick->VAL  = 0;
    SysTick->CTRL = 7;           // enable + interrupt + processor clock
}

void StartOS(void)
{
    uint32_t last = 0;

    while(1)
    {
        if((OsTick - last) >= 1000)
        {
            last = OsTick;
            LedTask();
        }
    }
}
