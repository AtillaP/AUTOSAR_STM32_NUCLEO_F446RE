#ifndef OS_H
#define OS_H

extern volatile uint32_t OsTick;

void SysTick_Handler(void);
void StartOS(void);
void Os_Init(void);

#endif
