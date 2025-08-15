#ifndef INC_TIME_H_
#define INC_TIME_H_

/* Header Directives Definitions */
#include "main.h"

/* SysTick Timer Delay Macros */
#define SYSTICK_LOAD 								(SystemCoreClock / 1000000U)
#define SYSTICK_DELAY_CALIB 						(SYSTICK_LOAD >> 1)

#define DELAY_US(us)								do{																\
													   uint32_t start = SysTick->VAL;								\
													   uint32_t ticks = (us * SYSTICK_LOAD) - SYSTICK_DELAY_CALIB;	\
													   while((start - SysTick->VAL) < ticks);						\
													   }while(0)

#define DELAY_MS(ms)								do{																\
														for(uint32_t i=0; i<ms; ++i){ DELAY_US(1000); } 			\
													   }while(0)

#endif
