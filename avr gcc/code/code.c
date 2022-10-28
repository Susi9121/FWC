#include<avr/io.h>
#include<stdbool.h>
#include <util/delay.h> 
void clk1(){
PORTB=((1<<PB5));
_delay_ms(1000);
PORTB=((0<<PB5));
_delay_ms(1000);
}
int main(){
bool X,Q,Z;
 Q = (PIND & (1<<PIND6)) == (1<<PIND6);
 X = (PINB & (1<<PINB0)) == (1<<PINB0);
//DDRD = 0b00000000;
//DDRD |= (1<<DDD2);
//DDRD |=(1<<DDD6)
//DDRB |=(1<<DDB0)

while(1)
   { 
	
	 	
	  Z = ((!Q)&&X) ||((Q)&&(!X));
	
	PORTD |= (Z<<PD2);
	Q=Z;
	clk1();

   
   }


}
