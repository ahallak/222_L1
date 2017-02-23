#include <plib.h>
#pragma config ICESEL = ICS_PGx1
#pragma config FNOSC = PRIPLL
#pragma config POSCMOD = EC
#pragma config FPLLIDIV = DIV_2
#pragma config FPLLMUL = MUL_20
#pragma config FPLLODIV = DIV_1
#pragma config FPBDIV = DIV_8

#define DELAY_COUNT 60000
//Button pins
#define btn1 PORTAbits.RA7
#define btn2 PORTAbits.RA8
//On-board LED Pins
#define led1 PORTBbits.RB10
#define led2 PORTBbits.RB11
#define led3 PORTBbits.RB12
#define led4 PORTBbits.RB13
//Pmod LED Pins
#define pmld7 PORTEbits.RE7
#define pmld6 PORTEbits.RE6
#define pmld5 PORTEbits.RE5
#define pmld4 PORTEbits.RE4
#define pmld3 PORTEbits.RE3
#define pmld2 PORTEbits.RE2
#define pmld1 PORTEbits.RE1
#define pmld0 PORTEbits.RE0

unsigned int tcfg;
int counter;
#test
void main(void)
{
    //Define outputs as digital outputs
    PORTSetPinsDigitalOut(IOPORT_E, BIT_0 | BIT_1 | BIT_2 | BIT_3 | BIT_4 | BIT_5 | BIT_6 | BIT_7);
    PORTSetPinsDigitalOut(IOPORT_B, BIT_10 | BIT_11 | BIT_12 | BIT_13);
    PORTSetPinsDigitalIn(IOPORT_A, BIT_6 | BIT_7);
    
    while(1)
    {
        pmld7 = 0;
        pmld6 = 0;
        pmld5 = 1;
        pmld4 = 1;
        pmld3 = 1;
        pmld2 = 1;
        pmld1 = 1;
        pmld0 = 0;
        led1 = 1;
        led2 = 0;
        led3 = 1;
        led4 = 1;
    }
}