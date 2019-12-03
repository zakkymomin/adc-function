// put prototypes for public functions, explain what it does
// put your names here, date
#include <stdint.h>
#ifndef ADC_H
#define ADC_H

void ADC_Init(void);

//------------ADC_In------------
// Busy-wait Analog to digital conversion
// Input: none
// Output: 12-bit result of ADC conversion
// measures from PD2, analog channel 5
uint32_t ADC_In(void);

#endif