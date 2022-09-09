void readSensorValues ()

{
  //reading sensor adc values
  sensor_1_adc = digitalRead(21);
  sensor_2_adc = digitalRead(20);
  sensor_3_adc = digitalRead(19);
  sensor_4_adc = digitalRead(18);
  sensor_5_adc = digitalRead(17);
  sensor_6_adc = digitalRead(16);
  sensor_7_adc = digitalRead(15);
  sensor_8_adc = digitalRead(14);

  vipFlag_l1=digitalRead(22);
  vipFlag_l2=digitalRead(23);
  

  
  //Triggering counter for car in and out count
  if(sensor_1_adc != sensor_1_adc_last)
  {
    if(sensor_1_adc == 1)
    {
      sensor_1_count++ ;
    }
  }
  
  if(sensor_2_adc != sensor_2_adc_last)
  {
    if(sensor_2_adc == 1)
    {
      sensor_2_count++ ;
    }
  }
  
  if(sensor_3_adc != sensor_3_adc_last)
  {
    if(sensor_3_adc == 1)
    {
      sensor_3_count++;
    }
  }
  
  if(sensor_4_adc != sensor_4_adc_last)
  {
    if(sensor_4_adc == 1)
    {
      sensor_4_count++;
    }
  }
  
  if(sensor_5_adc != sensor_5_adc_last)
  {
    if(sensor_5_adc == 1)
    {
      sensor_5_count++;
    }
  }
  
  if(sensor_6_adc != sensor_6_adc_last)
  {
    if(sensor_6_adc == 1)
    {
      sensor_6_count++;
    }
  }
  
  if(sensor_7_adc != sensor_7_adc_last)
  {
    if(sensor_7_adc == 1)
    {
      sensor_7_count++;
  }
  }
  
  if(sensor_8_adc != sensor_8_adc_last)
  {
     if(sensor_8_adc == 1)
    {
      sensor_8_count++;
  }
  }
  
  //resetting sensor value for single step count
  
  sensor_1_adc_last = sensor_1_adc;
  sensor_2_adc_last = sensor_2_adc;
  sensor_3_adc_last = sensor_3_adc;
  sensor_4_adc_last = sensor_4_adc;
  sensor_5_adc_last = sensor_5_adc;
  sensor_6_adc_last = sensor_6_adc;
  sensor_7_adc_last = sensor_7_adc;
  sensor_8_adc_last = sensor_8_adc;
}

