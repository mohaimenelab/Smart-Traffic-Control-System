void trafficControl ()
{
  //___________________________________________________condition for VIP in Lane One______________________________________________________________
  
  P = now_car_lane_one;
  Q = now_car_lane_two;

  //LED: PORTB: 0B L1By L1Br L2Cg L2Cy L2Cr L1Cg L1Cy L1Cr
  //PORTD: L1Bg_D4 L2Br_D3 L2By_D2 L2Bg_D7 

if (vipFlag_l1==1 && vipFlag_l2==1)
  {
    PORTB = 0b00001100;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD2));
    PORTD |= 1 << PD3;
    PORTD |= 1 << PD4; // Vip lane one
    conditionID=1;
  }
  
  if (vipFlag_l1==1 && vipFlag_l2==0)
  {
    PORTB = 0b00001100;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD2));
    PORTD |= 1 << PD3;
    PORTD |= 1 << PD4; // Vip lane one
    conditionID=2;
  }
  
   else if (vipFlag_l1==0 && vipFlag_l2==1)
  {
    PORTB = 0b01100001;
    PORTD &= (~(1 << PD4));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD2));
    PORTD |= 1 << PD7;  // VIP lane 2
    conditionID=3;
  }
  
   else if (vipFlag_l1==0 && vipFlag_l2==0)
   {
    if ( MaxCarL1==0 && MaxCarL2==0)
    {
    if (Q<=2)
    {
      PORTB = 0b00001100;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD2));
    PORTD |= 1 << PD3;
    PORTD |= 1 << PD4; // Vip lane one
    MaxCarL2 = 0;
    conditionID=4;
    }
    if (Q>=8 && Q<10)
    {
      PORTB = 0b10010010;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD2;
    conditionID=5;
    }
    if (Q>=10)
    {
      PORTB = 0b01100001;
    PORTD &= (~(1 << PD2));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD7;
    MaxCarL2=1;
    conditionID=6;
    }
    }
    
    else if ( MaxCarL1==0 && MaxCarL2==1)
    {
    if (P<=2)
    {
      PORTB = 0b01100001;
    PORTD &= (~(1 << PD2));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD7; 
    MaxCarL1 = 0;
    conditionID=7;
    }
    if (P>=8 && P<10)
    {
      PORTB = 0b10010010;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD2;
    conditionID=8;
    }
    if (P>=10)
    {
      PORTB = 0b00001100;
    PORTD &= (~(1 << PD2));
    PORTD &= (~(1 << PD7));
    PORTD |= 1 << PD4;
    PORTD |= 1 << PD3;
    MaxCarL1=1;
    conditionID=9;
    }
    }
    
    else if ( MaxCarL1==1 && MaxCarL2==0)
    {
    if (Q<=2)
    {
      PORTB = 0b00001100;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD2));
    PORTD |= 1 << PD3;
    PORTD |= 1 << PD4; // Vip lane one
    MaxCarL2 = 0;
    conditionID=10;
    }
    if (Q>=8 && Q<10)
    {
      PORTB = 0b10010010;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD2;
    conditionID=11;
    }
    if (Q>=10)
    {
      PORTB = 0b01100001;
    PORTD &= (~(1 << PD2));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD7;
    MaxCarL2=1;
    conditionID=12;
    }
    }
//LED: PORTB: 0B L1By L1Br L2Cg L2Cy L2Cr L1Cg L1Cy L1Cr
  //PORTD: L1Bg_D4 L2Br_D3 L2By_D2 L2Bg_D7 
    else if ( MaxCarL1==1 && MaxCarL2==1)
    {
    if (Q<=2)
    {
      PORTB = 0b00001100;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD2));
    PORTD |= 1 << PD3;
    PORTD |= 1 << PD4; // Vip lane one
    MaxCarL2 = 0;
    conditionID=13;
    }
    if (Q>=8 && Q<10)
    {
      PORTB = 0b10010010;
    PORTD &= (~(1 << PD7));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD2;
    conditionID=14;
    }
    if (Q>=10)
    {
      PORTB = 0b01100001;
    PORTD &= (~(1 << PD2));
    PORTD &= (~(1 << PD3));
    PORTD &= (~(1 << PD4));
    PORTD |= 1 << PD7;
    MaxCarL2=1;
    conditionID=15;
    }
   }
  }
  
  //________________________________________________________________________________________________________________________________________________  
}

