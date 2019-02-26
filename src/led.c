#include "led.h"

void LED_Init(void)
{
    RCC->APB2ENR |= 1 << 4;     /* 开启GPIOC的时钟 */
    GPIOC->CRH &= 0xFF0FFFFF;        /* 清除GPIOC13的当前模式 */
    GPIOC->CRH |= 0x00300000;          /* GPIOC13设置输出速度11,50Mhz，设置模式为00,推挽式输出 */

    GPIOC->ODR |= 1 << 13;      /* 设置GPIOC13为高 */
}






