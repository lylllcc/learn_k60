#include "gpio.h"
#include "common.h"
#include "uart.h"


#define KEY1 PEin(26)
#define LED1 PEout(6)

#define BUZZER PAout(6)

#define NO_KEY      (0x00)
#define KEY_SINGLE   (0x01)

static uint8_t getVal;



int main(void)
{
    DelayInit();
    
    LED1 = 1;
    
    GPIO_QuickInit(HW_GPIOE, 6, kGPIO_Mode_OPP);
    GPIO_QuickInit(HW_GPIOE, 26, kGPIO_Mode_IPU);
    GPIO_QuickInit(HW_GPIOA, 6, kGPIO_Mode_OPP);
    
    while(1)
    {
        if(KEY1 == 0)
        {
            LED1 = 0;
            KEY1 = 1;
            BUZZER = 1;
        }
        if(KEY1 == 1)
        {
            LED1 = 1;
            BUZZER = 0;
        }
    }
 
}


