
/* A Door Sensor is connected to bit 1 of Port B,and an led is connected to bit 6 of port C.This is the program to monitor the door sensor and,
   when it opens, turns on the LED without changing the state of other pins*/


#include <avr/io.h>
int main(void)
{
	DDRB=DDRB&0b11111101;//fd ->1st pin of port B is our input pin is kept LOW.
	DDRC=DDRC|0b01000000;//40 ->6th pin of port C is our output pin is kept HIGH.
	while(1)
	{
if(PINB & 0b00000010)//02 -> pin b register is continously read and is anded with a binary value(02) ,this tells us whether door switch is open or close.
	PORTC=PORTC|0b01000000;//40  ->led is set high by or ing port c with 40
		else
		PORTC=PORTC&0b10111111;//bf  ->here it is that door is closed so led should be off.
	}
	return 0;
	}
