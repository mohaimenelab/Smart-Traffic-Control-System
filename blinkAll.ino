void blinkAll ()
{
  PORTB = 0b11111111;
  PORTD |= 1 << PD2;
  PORTD |= 1 << PD3;
  PORTD |= 1 << PD4;
  PORTD |= 1 << PD7;
  
  _delay_ms(200);
  
  PORTB = 0b00000000;
  PORTD &= (~(1 << PD2));
  PORTD &= (~(1 << PD3));
  PORTD &= (~(1 << PD4));
  PORTD &= (~(1 << PD7));
  
  _delay_ms(200);
  
  PORTB = 0b11111111;
  PORTD |= 1 << PD2;
  PORTD |= 1 << PD3;
  PORTD |= 1 << PD4;
  PORTD |= 1 << PD7;
  
  _delay_ms(200);
  
  PORTB = 0b00000000;
  PORTD &= (~(1 << PD2));
  PORTD &= (~(1 << PD3));
  PORTD &= (~(1 << PD4));
  PORTD &= (~(1 << PD7));
  
  _delay_ms(200);
  
  PORTB = 0b11111111;
  PORTD |= 1 << PD2;
  PORTD |= 1 << PD3;
  PORTD |= 1 << PD4;
  PORTD |= 1 << PD7;
  
  _delay_ms(200);
  
  PORTB = 0b00000000;
  PORTD &= (~(1 << PD2));
  PORTD &= (~(1 << PD3));
  PORTD &= (~(1 << PD4));
  PORTD &= (~(1 << PD7));
}
