void debugOut()
{

  if (seconds-debugOutFlag>0)
   {
    //lcd.clear();
 Serial.print ("L1_CIn_S1: ");
 Serial.print (sensor_1_adc);
 Serial.print (" L1_CIn_S2: ");
 Serial.print (sensor_2_adc);
 Serial.print (" L1_COut_S1: ");
 Serial.print (sensor_3_adc);
 Serial.print (" L1_COut_S2: ");
 Serial.println (sensor_4_adc);

 Serial.print ("L2_CIn_S1: ");
 Serial.print (sensor_5_adc);
 Serial.print (" L2_CIn_S2: ");
 Serial.print (sensor_6_adc);
 Serial.print (" L2_COut_S1: ");
 Serial.print (sensor_7_adc);
 Serial.print (" L2_COut_S2: ");
 Serial.println (sensor_8_adc);

 Serial.println (" ");

 Serial.print ("S1C: ");
 Serial.print (sensor_1_count);
 Serial.print (" S2C: ");
 Serial.print (sensor_2_count);
 Serial.print (" S3C: ");
 Serial.print (sensor_3_count);
 Serial.print (" S4C: ");
 Serial.print (sensor_4_count);
 Serial.print (" S5C: ");
 Serial.print (sensor_5_count);
 Serial.print (" S6C: ");
 Serial.print (sensor_6_count);
 Serial.print (" S7C: ");
 Serial.print (sensor_7_count);
 Serial.print (" S8C: ");
 Serial.print (sensor_8_count);

 Serial.println (" ");

 Serial.print ("VIP_L1: ");
 Serial.print (vipFlag_l1);
 Serial.print (" VIP_L2: ");
 Serial.print (vipFlag_l2);
 Serial.print (" MAX_CAR_L1: ");
 Serial.print (MaxCarL1);
 Serial.print (" MAX_CAR_L2: ");
 Serial.println (MaxCarL2);

 Serial.print ("In Loop: ");
 Serial.println (conditionID);

 Serial.println (" ");
 debugOutFlag=seconds;
   }
}
