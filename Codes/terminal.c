#include <LPC17xx.h>
#include <math.h>
#include "uart.h"

int i;

void delay_ms(unsigned int x){
	unsigned int j, k;
	for(j =0; j < x; j++)
		for(k =0; k < x; k++);
}



int main(void){

	UART0_Init();
	while(1){
		UART0_SendString("Farnaz and Gelareh\r\n");
		delay_ms(1000);
		
	}
}
