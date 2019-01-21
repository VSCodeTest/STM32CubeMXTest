#include "LEDBlink.h"
#include "stm32f4xx_hal.h"


void LEDBlink()
{
    HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
}