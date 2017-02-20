#include "gpio.h"
#include "common.h"
#include "uart.h"

 
int main(void)
{
  
    
      GPIO_InitTypeDef gpio_initStruct = {0};
    gpio_initStruct.instance = HW_GPIOE;
    gpio_initStruct.mode = kGPIO_Mode_OPP;
    gpio_initStruct.pinx = 6;
    GPIO_Init(&gpio_initStruct);

    GPIO_WriteBit(HW_GPIOE, 6, 0);
    
    
    
    
    
}


