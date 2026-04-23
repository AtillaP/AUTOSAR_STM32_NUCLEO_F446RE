#include "Mcu.h"
#include "Port.h"
#include "Dio.h"

int main(void)
{
    Mcu_Init();
    Port_Init();

    while(1)
    {
        Dio_FlipChannel(0);

        for(volatile int i=0; i<2000000; i++);
    }
}
