#include "stm32f446xx.h"
#include "Dio.h"

#define LED_CHANNEL 0
#define LED_PIN     (1U << 5)

void Dio_WriteChannel(uint8_t channel, uint8_t level)
{
    if(channel == LED_CHANNEL)
    {
        if(level)
            GPIOA->ODR |= LED_PIN;
        else
            GPIOA->ODR &= ~LED_PIN;
    }
}

void Dio_FlipChannel(uint8_t channel)
{
    if(channel == LED_CHANNEL)
    {
        GPIOA->ODR ^= LED_PIN;
    }
}
