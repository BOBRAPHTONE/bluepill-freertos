#include "stm32f1xx_it.h"
#include "main.h"


// 1 Second interrupt
void RTC_IRQHandler (void) {





NVIC_ClearPendingIRQ(RTC_IRQn);
RTC->CRL = 0;

}

void NMI_Handler(void)
{
}
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}


void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}


void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}


void SVC_Handler(void)
{
}


void DebugMon_Handler(void)
{
}


void PendSV_Handler(void)
{


}


void SysTick_Handler(void)
{



}


void USB_LP_CAN1_RX0_IRQHandler(void)
{
//  HAL_PCD_IRQHandler(&hpcd);
}


void USBWakeUp_IRQHandler(void)
{
  __HAL_USB_WAKEUP_EXTI_CLEAR_FLAG();
}


void EXTI15_10_IRQHandler(void)
{
//  HAL_GPIO_EXTI_IRQHandler(USER_BUTTON_PIN);
}

/*
void prvGetRegistersFromStack( uint32_t *pulFaultStackAddress )
{

volatile uint32_t r0;
volatile uint32_t r1;
volatile uint32_t r2;
volatile uint32_t r3;
volatile uint32_t r12;
volatile uint32_t lr;
volatile uint32_t pc;
volatile uint32_t psr;

    r0 = pulFaultStackAddress[ 0 ];
    r1 = pulFaultStackAddress[ 1 ];
    r2 = pulFaultStackAddress[ 2 ];
    r3 = pulFaultStackAddress[ 3 ];

    r12 = pulFaultStackAddress[ 4 ];
    lr = pulFaultStackAddress[ 5 ];
    pc = pulFaultStackAddress[ 6 ];
    psr = pulFaultStackAddress[ 7 ];
    __ASM volatile("BKPT #01");
    for( ;; );
}
*/
void HardFault_Handler(void)
{
 __ASM volatile("BKPT #01");
 for (;;);
 /*
 __asm volatile
    (
        " tst lr, #4                                                \n"
        " ite eq                                                    \n"
        " mrseq r0, msp                                             \n"
        " mrsne r0, psp                                             \n"
        " ldr r1, [r0, #24]                                         \n"
        " ldr r2, handler2_address_const                            \n"
        " bx r2                                                     \n"
        " handler2_address_const: .word prvGetRegistersFromStack    \n"
    );
*/
}
