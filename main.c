//einfaches Blinkprogramm für die onboard LED auf D13/PB5
#include <util/delay.h>
#include <avr/io.h>          
int main (void) {            
  DDRB  = 0xff;             
  while(1) {                
    PORTB |= (1<<PB5);    
    _delay_ms(500);       
    PORTB &= ~(1<<PB5);   
    _delay_ms(500);       
  }                         
 return 0;                 
}
