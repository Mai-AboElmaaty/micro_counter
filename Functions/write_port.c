#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"

void DIO_WritePort(uint8_t port_index, uint8_t pins_mask, Dio_levelType pins_level){
	if (port_index == 0) // Port A
	{
		if (pins_level==STD_HIGH)
		{
			 GPIO_PORTA_DATA_R |= pins_mask;
		}
		else if(pins_level==STD_LOW)
			{
			GPIO_PORTA_DATA_R &= ~pins_mask;
		  }
	}
	else if (port_index == 1) // Port B
	{
		if (pins_level==STD_HIGH)
		{
			 GPIO_PORTB_DATA_R |= pins_mask;
		}
		else if(pins_level==STD_LOW)
			{
			GPIO_PORTB_DATA_R &= ~pins_mask;
		  }
	}
	else if (port_index == 2) // Port C
	{
		if (pins_level==STD_HIGH)
		{
			 GPIO_PORTC_DATA_R |= pins_mask;
		}
		else if(pins_level==STD_LOW)
			{
			GPIO_PORTC_DATA_R &= ~pins_mask;
		  }
	}
	else if (port_index == 3) // Port D
	{
		if (pins_level==STD_HIGH)
		{
			 GPIO_PORTD_DATA_R |= pins_mask;
		}
		else if(pins_level==STD_LOW)
			{
			GPIO_PORTD_DATA_R &= ~pins_mask;
		  }
	}
	else if (port_index == 4) // Port E
	{
		if (pins_level==STD_HIGH)
		{
			 GPIO_PORTE_DATA_R |= pins_mask;
		}
		else if(pins_level==STD_LOW)
			{
			GPIO_PORTE_DATA_R &= ~pins_mask;
		  }
	}
	else if (port_index == 5) // Port f
	{
		if (pins_level==STD_HIGH)
		{
			 GPIO_PORTF_DATA_R |= pins_mask;
		}
		else if(pins_level==STD_LOW)
			{
			GPIO_PORTF_DATA_R &= ~pins_mask;
		  }
	}
}