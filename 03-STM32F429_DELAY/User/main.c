/**
 *	Pretty precise delay functions with SysTick timer
 *
 *	@author 	Tilen Majerle
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.com
 *	@version 	v1.0
 *	@ide		Keil uVision
 */
#include "stm32f4xx.h"
#include "tm_stm32f4_delay.h"
#include "tm_stm32f4_disco.h"

int main(void) {
	//Initialize system for 180MHz core clock
	SystemInit();
	//Initialize delay Systick timer
	TM_DELAY_Init();
	//Initialize onboard leds
	TM_DISCO_LedInit();

	while (1) {
		//Toggle leds
		GPIO_ToggleBits(GPIOG, LED_GREEN);
		//Delay 500ms
		Delayms(500);
	}
}
