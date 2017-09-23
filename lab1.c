//Quanley Marieatte - MicroP Lab 1
//
#include <p18f452.h>
#include <stdio.h>

int i = 0;

void main (void){
    TRISB = 0xF0;
    PORTB = 0;
    for (i = 0; i < 15 ; i++){
        PORTB = i + 1;
    }
}
