/*
 * File:   main.c
 * Author: Jamshed
 *
 * Created on June 5, 2022, 6:22 PM
 */

#include <xc.h>
#include "config.h"

#define _XTAL_FREQ     4e6

#define LED_BIT PORTBbits.RB0

void main() {
    TRISBbits.TRISB0 = 0;
     
    LED_BIT = 0;
    
    while (1) {
        LED_BIT = !LED_BIT;
        __delay_ms(500);
    }
}