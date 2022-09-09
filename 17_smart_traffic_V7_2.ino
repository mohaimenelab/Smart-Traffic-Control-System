#include <avr/io.h>
#include <util/delay.h>
#include <LiquidCrystal.h>

#include <stdio.h>
#include <util/delay.h>


LiquidCrystal lcd(8, 9, 26, 27, 28, 29);

//int readADCValue(unsigned char channel);
void readSensorValues ();
void blinkAll ();
void displayInfo();
void laneCarCount ();
void trafficControl ();

int sensor_1_adc = 0;
int sensor_2_adc = 0;
int sensor_3_adc = 0;
int sensor_4_adc = 0;
int sensor_5_adc = 0;
int sensor_6_adc = 0;
int sensor_7_adc = 0;
int sensor_8_adc = 0;



int sensor_1_count = 0;
int sensor_2_count = 0;
int sensor_3_count = 0;
int sensor_4_count = 0;
int sensor_5_count = 0;
int sensor_6_count = 0;
int sensor_7_count = 0;
int sensor_8_count = 0;



int sensor_1_adc_last = 0;
int sensor_2_adc_last = 0;
int sensor_3_adc_last = 0;
int sensor_4_adc_last = 0;
int sensor_5_adc_last = 0;
int sensor_6_adc_last = 0;
int sensor_7_adc_last = 0;
int sensor_8_adc_last = 0;


 int total_car_lane_one = 0;
 int total_car_lane_two = 0;


int car_counter_one = 0;
int car_counter_two = 0;
int car_counter_three = 0;
int car_counter_four = 0;
// int car_counter_two_laneone = 0;
// int car_counter_three_lanetwo = 0;
// int car_counter_four_lanetwo = 0;

int car_in_lane_one = 0;
int car_out_lane_one = 0;

int car_in_lane_two = 0;
int car_out_lane_two = 0;

int now_car_lane_one = 0;
int now_car_lane_two = 0;
int P = 0;
int Q = 0;

long cycleCount=0;
int infoSelect=0;
int debugOutFlag=0;
long seconds=0;
long displayClearFlag=0;

bool vipFlag_l1=0;
bool vipFlag_l2=0;

bool MaxCarL1=0;
bool MaxCarL2=0;

long waitCar=0;
bool waitCarFlag=0;

int conditionID=0;
int LastconditionID=0;

void setup () {
    // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  Serial.begin (9600);
  lcd.setCursor (0, 0);
  lcd.print("Traffic Control ");
  lcd.setCursor (0, 1);
  lcd.print("Initializing....");
  _delay_ms(50);    //Delay for stabilization

  //ADMUX |= 1 << REFS0;    //Reference is AVCC with external capacitor at AREF pin. Right adjust the result
  //ADCSRA |= 1 << ADPS1;   //Division factor: 4, single conversion mode
  //ADCSRA |= (1 << ADEN);    //Enable ADC
  DDRA = 0x00;
  DDRB = 0xFF;
  DDRD |= 1 << PD2;
  DDRD |= 1 << PD3;
  DDRD |= 1 << PD4;
  DDRD |= 1 << PD7;
    
  DDRC &= (~(1<<PC0));
  DDRC &= (~(1<<PC1));
  
  blinkAll ();
  lcd.setCursor (0, 0);
  lcd.print("                ");
  lcd.setCursor (0, 1);
  lcd.print("                ");

}


void loop ()
  { 
    seconds=millis()/1000;
    readSensorValues();   // Reading Sensor values
    laneCarCount ();    // Counting cars based on sensor reading
    displayInfo();      // Displaying lane car information
    trafficControl ();    // Controlling Traffic signal based on carcount  
    debugOut();
  }
















