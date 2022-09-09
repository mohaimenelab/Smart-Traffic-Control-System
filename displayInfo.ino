void displayInfo()
{
 // cycleCount++;
 
  if (seconds-cycleCount<=2)
  {
    infoSelect=0;
    //lcd.clear();
  }
  else{infoSelect=1;}

  if (seconds-cycleCount>5)
{
  cycleCount=seconds;
 // lcd.clear();
}
    
    if (infoSelect==0)
    {    
       lcd.setCursor (0, 0);
       lcd.print("Total Car L1= ");
       lcd.setCursor (0, 1);
       lcd.print("Total Car L2= ");

       lcd.setCursor (14, 0);
       lcd.print(total_car_lane_one);
       lcd.setCursor (14, 1);
       lcd.print(total_car_lane_two);
    }
  else 
  {
     lcd.setCursor (0, 0);
     lcd.print("Car In L1   = ");
     lcd.setCursor (0, 1);
     lcd.print("Car In L2   = ");

     lcd.setCursor (14, 0);
     lcd.print(now_car_lane_one);
     lcd.setCursor (14, 1);
     lcd.print(now_car_lane_two);   
  }

  
if (seconds-displayClearFlag>2)
   {
       lcd.setCursor (13, 0);
       lcd.print("   ");
       lcd.setCursor (13, 1);
       lcd.print("   ");
    displayClearFlag=seconds;
   }


}
