#ifndef DIO_H
#define DIO_H

#include <stdint.h>

#define STD_HIGH 1
#define STD_LOW  0

void Dio_WriteChannel(uint8_t channel, uint8_t level);
void Dio_FlipChannel(uint8_t channel);

#endif
