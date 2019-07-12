#include "stm32f4xx.h"                  // Device header

int main()
	{
		// Ilk olarak GPIOD portuna giden sinyal hatti aktiflestirilir
		// Firstly we have to enable outgoing signal clock on GPIOD port  
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
		
		
		// GPIOD portunun konfigürasyon ayarlari yapiliyor
		// Adjusting GPIOD port configuration,
		GPIO_InitTypeDef GPIO_InitStructure;																						// Structure
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_OUT;																			// Output Mode
		GPIO_InitStructure.GPIO_OType=GPIO_OType_PP;																		// Push Pull
		GPIO_InitStructure.GPIO_Pin=GPIO_Pin_15|GPIO_Pin_14|GPIO_Pin_13|GPIO_Pin_12;		// Led Pins
		GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_NOPULL;																	// No pull (Open Drain) 
		GPIO_InitStructure.GPIO_Speed=GPIO_Speed_100MHz;																// Maximum speed (High Energy Consumption)
		GPIO_Init(GPIOD,&GPIO_InitStructure);																						// Write those settings to GPIO Registers 
		
		while(1)	// Infinite loop
		{
			
			// Toggle komutu her çalistiginda ilgili pinleri 0 ise 1, 1 ise sifir yapiyor
			// Whenever ToggleBits command runs, chance corresponding pins 1 to 0 and 0 to 1 
			GPIO_ToggleBits(GPIOD,GPIO_Pin_15|GPIO_Pin_14|GPIO_Pin_13|GPIO_Pin_12);
			
			// Delay fonksiyonu for döngüsü ile olusturuldu
			// Delay function created with for loop
			for(int i=0;i<=0XFFFFFF;i++);
		}
		
	}
	
	
	//
	// CODED BY mfkutuk
	//