/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define RADIO_DIO_4_Pin GPIO_PIN_13
#define RADIO_DIO_4_GPIO_Port GPIOC
#define RADIO_DIO_4_EXTI_IRQn EXTI15_10_IRQn
#define RADIO_DIO_3_Pin GPIO_PIN_0
#define RADIO_DIO_3_GPIO_Port GPIOH
#define RADIO_DIO_3_EXTI_IRQn EXTI0_IRQn
#define GPS_PPS_Pin GPIO_PIN_0
#define GPS_PPS_GPIO_Port GPIOA
#define ADC_VBAT_Pin GPIO_PIN_2
#define ADC_VBAT_GPIO_Port GPIOA
#define RADIO_DIO_2_Pin GPIO_PIN_3
#define RADIO_DIO_2_GPIO_Port GPIOA
#define RADIO_DIO_2_EXTI_IRQn EXTI3_IRQn
#define RADIO_RF_CTX_PA_Pin GPIO_PIN_4
#define RADIO_RF_CTX_PA_GPIO_Port GPIOA
#define RADIO_SCK_Pin GPIO_PIN_5
#define RADIO_SCK_GPIO_Port GPIOA
#define RADIO_MISO_Pin GPIO_PIN_6
#define RADIO_MISO_GPIO_Port GPIOA
#define RADIO_MOSI_Pin GPIO_PIN_7
#define RADIO_MOSI_GPIO_Port GPIOA
#define RADIO_NSS_Pin GPIO_PIN_0
#define RADIO_NSS_GPIO_Port GPIOB
#define RADIO_DIO_1_Pin GPIO_PIN_1
#define RADIO_DIO_1_GPIO_Port GPIOB
#define RADIO_DIO_1_EXTI_IRQn EXTI1_IRQn
#define GPS_TX_Pin GPIO_PIN_10
#define GPS_TX_GPIO_Port GPIOB
#define GPS_RX_Pin GPIO_PIN_11
#define GPS_RX_GPIO_Port GPIOB
#define LIS3DH_INT1_Pin GPIO_PIN_14
#define LIS3DH_INT1_GPIO_Port GPIOB
#define LIS3DH_INT1_EXTI_IRQn EXTI15_10_IRQn
#define LIS3DH_INT2_Pin GPIO_PIN_15
#define LIS3DH_INT2_GPIO_Port GPIOB
#define LIS3DH_INT2_EXTI_IRQn EXTI15_10_IRQn
#define VCOM_TX_Pin GPIO_PIN_9
#define VCOM_TX_GPIO_Port GPIOA
#define VCOM_RX_Pin GPIO_PIN_10
#define VCOM_RX_GPIO_Port GPIOA
#define RADIO_DIO_0_Pin GPIO_PIN_11
#define RADIO_DIO_0_GPIO_Port GPIOA
#define RADIO_DIO_0_EXTI_IRQn EXTI15_10_IRQn
#define LED1_Pin GPIO_PIN_12
#define LED1_GPIO_Port GPIOA
#define GPS_POWER_ON_Pin GPIO_PIN_15
#define GPS_POWER_ON_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_4
#define LED2_GPIO_Port GPIOB
#define RADIO_RF_CRX_RX_Pin GPIO_PIN_6
#define RADIO_RF_CRX_RX_GPIO_Port GPIOB
#define RADIO_RF_CBT_HF_Pin GPIO_PIN_7
#define RADIO_RF_CBT_HF_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
