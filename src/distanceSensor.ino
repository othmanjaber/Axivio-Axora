#include <Wire.h>
#include <VL53L0X.h>

VL53L0X sensor1;
VL53L0X sensor2;
VL53L0X sensor3;
VL53L0X sensor4;

#define XSHUT1 2
#define XSHUT2 3
#define XSHUT3 4
#define XSHUT4 5

void setup() {
  Serial.begin(9600);
  Wire.begin();

  pinMode(XSHUT1, OUTPUT);
  pinMode(XSHUT2, OUTPUT);
  pinMode(XSHUT3, OUTPUT);
  pinMode(XSHUT4, OUTPUT);
  
  digitalWrite(XSHUT1, LOW);
  digitalWrite(XSHUT2, LOW);
  digitalWrite(XSHUT3, LOW);
  digitalWrite(XSHUT4, LOW);
  delay(10);

  digitalWrite(XSHUT1, HIGH);
  delay(10);
  sensor1.init(true);
  sensor1.setAddress(0x30);
 
  digitalWrite(XSHUT2, HIGH);
  delay(10);
  sensor2.init(true);
  sensor2.setAddress(0x31);
 
  digitalWrite(XSHUT3, HIGH);
  delay(10);
  sensor3.init(true);
  sensor3.setAddress(0x32);
 
  digitalWrite(XSHUT4, HIGH);
  delay(10);
  sensor4.init(true);
  sensor4.setAddress(0x33);
}

void mesure(int direction){
  if(direction == 1){
    return sensor1.readRangeSingleMillimeters();
  }
  else if(direction == 2){
    return sensor2.readRangeSingleMillimeters();
  }
  else if(direction == 3){
    return sensor3.readRangeSingleMillimeters();
  }
  else if(direction == 4){
    return sensor4.readRangeSingleMillimeters();
  }
}

void loop() {}
