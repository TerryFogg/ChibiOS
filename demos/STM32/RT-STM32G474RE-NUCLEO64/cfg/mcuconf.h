/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * STM32G4xx drivers configuration.
 * The following settings override the default settings present in
 * the various device driver implementation headers.
 * Note that the settings for each driver only have effect if the whole
 * driver is enabled in halconf.h.
 *
 * IRQ priorities:
 * 15...0       Lowest...Highest.
 *
 * DMA priorities:
 * 0...3        Lowest...Highest.
 */

#ifndef MCUCONF_H
#define MCUCONF_H

#define STM32G473_MCUCONF
#define STM32G483_MCUCONF
#define STM32G474_MCUCONF
#define STM32G484_MCUCONF

/*
 * HAL driver system settings.
 */
#define STM32_NO_INIT                       FALSE
#define STM32_VOS                           STM32_VOS_RANGE1
#define STM32_PWR_CR2                       (STM32_PLS_LEV0 |               \
                                             STM32_PVDE_DISABLED)
#define STM32_HSI16_ENABLED                 FALSE
#define STM32_HSI48_ENABLED                 FALSE
#define STM32_HSE_ENABLED                   FALSE
#define STM32_LSI_ENABLED                   FALSE
#define STM32_LSE_ENABLED                   FALSE
#define STM32_SW                            STM32_SW_PLLRCLK
#define STM32_PLLSRC                        STM32_PLLSRC_HSI16
#define STM32_PLLM_VALUE                    4
#define STM32_PLLN_VALUE                    84
#define STM32_PLLP_VALUE                    7
#define STM32_PLLQ_VALUE                    8
#define STM32_PLLR_VALUE                    2
#define STM32_HPRE                          STM32_HPRE_DIV1
#define STM32_PPRE                          STM32_PPRE_DIV1
#define STM32_MCOSEL                        STM32_MCOSEL_NOCLOCK
#define STM32_MCOPRE                        STM32_MCOPRE_DIV1
#define STM32_LSCOSEL                       STM32_LSCOSEL_NOCLOCK

/*
 * Peripherals clock sources.
 */
#define STM32_USART1SEL                     STM32_USART1SEL_SYSCLK
#define STM32_USART2SEL                     STM32_USART2SEL_SYSCLK
#define STM32_USART3SEL                     STM32_USART3SEL_SYSCLK
#define STM32_UART4SEL                      STM32_UART4SEL_SYSCLK
#define STM32_UART5SEL                      STM32_UART5SEL_SYSCLK
#define STM32_LPUART1SEL                    STM32_LPUART1SEL_SYSCLK
#define STM32_I2C1SEL                       STM32_I2C1SEL_PCLK
#define STM32_I2C2SEL                       STM32_I2C2SEL_PCLK
#define STM32_I2C3SEL                       STM32_I2C3SEL_PCLK
#define STM32_I2C4SEL                       STM32_I2C4SEL_PCLK
#define STM32_LPTIM1SEL                     STM32_LPTIM1SEL_PCLK
#define STM32_SAI1SEL                       STM32_SAI1SEL_SYSCLK
#define STM32_I2S23SEL                      STM32_I2S23SEL_SYSCLK
#define STM32_FDCANSEL                      STM32_FDCANSEL_HSE
#define STM32_CLK48SEL                      STM32_CLK48SEL_HSI48
#define STM32_ADC12SEL                      STM32_ADC12SEL_PLLPCLK
#define STM32_ADC345SEL                     STM32_ADC345SEL_PLLPCLK
#define STM32_QSPISEL                       STM32_QSPISEL_SYSCLK
#define STM32_RTCSEL                        STM32_RTCSEL_NOCLOCK

/*
 * IRQ system settings.
 */
#define STM32_IRQ_EXTI0_PRIORITY            6
#define STM32_IRQ_EXTI1_PRIORITY            6
#define STM32_IRQ_EXTI2_PRIORITY            6
#define STM32_IRQ_EXTI3_PRIORITY            6
#define STM32_IRQ_EXTI4_PRIORITY            6
#define STM32_IRQ_EXTI5_9_PRIORITY          6
#define STM32_IRQ_EXTI10_15_PRIORITY        6
#define STM32_IRQ_EXTI16_40_41_PRIORITY     6
#define STM32_IRQ_EXTI17_PRIORITY           6
#define STM32_IRQ_EXTI19_PRIORITY           6
#define STM32_IRQ_EXTI20_PRIORITY           6
#define STM32_IRQ_EXTI21_22_29_PRIORITY     6
#define STM32_IRQ_EXTI30_31_32_PRIORITY     6

#define STM32_IRQ_TIM1_BRK_TIM15_PRIORITY   7
#define STM32_IRQ_TIM1_UP_TIM16_PRIORITY    7
#define STM32_IRQ_TIM1_TRGCO_TIM17_PRIORITY 7
#define STM32_IRQ_TIM1_CC_PRIORITY          7
#define STM32_IRQ_TIM2_PRIORITY             7
#define STM32_IRQ_TIM3_PRIORITY             7
#define STM32_IRQ_TIM4_PRIORITY             7
#define STM32_IRQ_TIM5_PRIORITY             7
#define STM32_IRQ_TIM6_PRIORITY             7
#define STM32_IRQ_TIM7_PRIORITY             7
#define STM32_IRQ_TIM8_BRK_PRIORITY         7
#define STM32_IRQ_TIM8_UP_PRIORITY          7
#define STM32_IRQ_TIM8_TRGCO_PRIORITY       7
#define STM32_IRQ_TIM8_CC_PRIORITY          7
#define STM32_IRQ_TIM20_BRK_PRIORITY        7
#define STM32_IRQ_TIM20_UP_PRIORITY         7
#define STM32_IRQ_TIM20_TRGCO_PRIORITY      7
#define STM32_IRQ_TIM20_CC_PRIORITY         7

#define STM32_IRQ_USART1_PRIORITY           3
#define STM32_IRQ_USART2_PRIORITY           3
#define STM32_IRQ_USART3_PRIORITY           3
#define STM32_IRQ_UART4_PRIORITY            3
#define STM32_IRQ_UART5_PRIORITY            3
#define STM32_IRQ_LPUART1_PRIORITY          3

/*
 * ADC driver system settings.
 */

/*
 * CAN driver system settings.
 */

/*
 * DAC driver system settings.
 */

/*
 * GPT driver system settings.
 */

/*
 * I2C driver system settings.
 */

/*
 * ICU driver system settings.
 */

/*
 * PWM driver system settings.
 */

/*
 * RTC driver system settings.
 */

/*
 * SDC driver system settings.
 */

/*
 * SERIAL driver system settings.
 */

/*
 * SPI driver system settings.
 */

/*
 * ST driver system settings.
 */
#define STM32_ST_IRQ_PRIORITY               8
#define STM32_ST_USE_TIMER                  2

/*
 * TRNG driver system settings.
 */

/*
 * UART driver system settings.
 */

/*
 * USB driver system settings.
 */

/*
 * WDG driver system settings.
 */

/*
 * WSPI driver system settings.
 */

#endif /* MCUCONF_H */
