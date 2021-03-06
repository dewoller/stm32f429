/**
 * PCD8544 LCD controller driver example
 *
 *	@author 	Tilen Majerle
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.com
 *	@ide		Keil uVision
 */
#include "defines.h"
#include "stm32f4xx.h"
#include "tm_stm32f4_pcd8544.h"

#include "stdio.h"

int main(void) {
	volatile uint32_t delay;
	uint8_t x;
	char buf[30];
	//180MHz
	SystemInit();

	//Initialize LCD with 0x38 software contrast
	PCD8544_Init();
	
	//Go to x=14, y=3 position
	PCD8544_GotoXY(14, 3);
	
	//Print data with Pixel Set mode and Fontsize of 5x7px
	PCD8544_Puts("STM32F429", PCD8544_Pixel_Set, PCD8544_FontSize_5x7);
	PCD8544_GotoXY(15, 13);
	PCD8544_Puts("Discovery", PCD8544_Pixel_Set, PCD8544_FontSize_5x7);
	PCD8544_GotoXY(30, 26);
	PCD8544_Puts("2014", PCD8544_Pixel_Set, PCD8544_FontSize_5x7);

	PCD8544_GotoXY(45, 42);
	
	//Put string with Pixel set mode and Fontsize of 3x5
	PCD8544_Puts("majerle.eu", PCD8544_Pixel_Set, PCD8544_FontSize_3x5);

	//PCD8544_DrawFilledRectangle(0, 0, 83, 47, PCD8544_Pixel_Set);
	//PCD8544_Refresh();
	//PCD8544_Clear();
	
	PCD8544_DrawLine(0, 0, 41, 0, PCD8544_Pixel_Set);
	PCD8544_DrawLine(0, 2, 41, 41, PCD8544_Pixel_Set);
    while (1) {
		
		//if (x > 46) x = 0;
    }
}
