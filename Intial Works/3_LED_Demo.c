#include <avr/io.h>

#define LED_PIN1    PB3   //led pin(d12)
#define BUTTON_PIN1  PB2   // button pin(d9)
#define LED_PIN2     PB4   //led pin(d12)
#define BUTTON_PIN2  PB1   // button pin(d9)
#define LED_PIN3     PB5   //led pin(d12)
#define BUTTON_PIN3  PB0   // button pin(d9)
void init_io(void) {
    
    DDRB |= (1 << LED_PIN1);// output


    DDRB &= ~(1 << BUTTON_PIN1);//input->button
  	PORTB |= (1 << BUTTON_PIN1);//pull-up
  
  DDRB |= (1 << LED_PIN2);// output


    DDRB &= ~(1 << BUTTON_PIN2);//input->button
  	PORTB |= (1 << BUTTON_PIN2);//pull-up
  DDRB |= (1 << LED_PIN3);// output


    DDRB &= ~(1 << BUTTON_PIN3);//input->button
  	PORTB |= (1 << BUTTON_PIN3);//pull-up
}

int main(void) {
    init_io();

    while (1) {
        if (!(PINB & (1 << BUTTON_PIN1))) {  //if button1 is low
            PORTB |= (1 << LED_PIN1);       // led1 on
        } else {
            PORTB &= ~(1 << LED_PIN1);      // led1 off
        }
      if (!(PINB & (1 << BUTTON_PIN2))) {  //if button2 is low
            PORTB |= (1 << LED_PIN2);       // led2 on
        } else {
            PORTB &= ~(1 << LED_PIN2);      // led2 off
        }
      if (!(PINB & (1 << BUTTON_PIN3))) {  //if button3 is low
            PORTB |= (1 << LED_PIN3);       // led3 on
        } else {
            PORTB &= ~(1 << LED_PIN3);      // led3 off
        }
    }

    return 0;
}
