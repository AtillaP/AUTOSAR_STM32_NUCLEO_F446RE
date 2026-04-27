#include "Mcu.h"
#include "Port.h"
#include "Dio.h"
#include "Os.h"

int main(void)
{
    Mcu_Init();
    Port_Init();
    Os_Init();

    StartOS();
}
