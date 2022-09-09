void laneCarCount ()
{ 
  car_in_lane_one =  ((sensor_1_count) + (sensor_2_count));
  car_in_lane_one =  ( car_in_lane_one / 2 );
  
  car_out_lane_one = ((sensor_3_count)/2 + (sensor_4_count)/2);
  //car_out_lane_one = car_out_lane_one / 2;
  
  
  car_in_lane_two = (sensor_5_count + sensor_6_count);
  car_in_lane_two = (car_in_lane_two / 2);
  
  
  car_out_lane_two = (sensor_7_count + sensor_8_count);
  car_out_lane_two = (car_out_lane_two / 2);

  
  
  now_car_lane_one = ( car_in_lane_one - car_out_lane_one );
  now_car_lane_two = ( car_in_lane_two - car_out_lane_two );

  total_car_lane_one = car_out_lane_one;
  total_car_lane_two = car_out_lane_two;

  if (now_car_lane_one<=0)
  now_car_lane_one=0;

  if (now_car_lane_two<=0)
  now_car_lane_two=0;
}
