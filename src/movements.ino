#include <Arduino.h>
#include <Servo.h>
#include <MPU6050_tockn.h>
#include <Wire.h>

Servo steering;
MPU6050 mpu6050(Wire);

//Defining The Motor Driver And Pins And The Servo Pin
#define MP1 2 //Motor Pin 1 (IN3)
#define MP2 4 //Motor Pin 2 (IN4)
#define SCP 3 //Speed Control Pin (ENB)
#define SSP 5 //Steering Servo Pin

void setup() {
//Setting Up The Pin Mode For The Motor Driver Pins And The Servo Pin
pinMode(MP1, OUTPUT);  
pinMode(MP1, OUTPUT);
pinMode(SCP, OUTPUT);  
pinMode(SSP, OUTPUT);  
steering.attach(SSP);

Wire.begin();
mpu6050.begin();
mpu6050.calcGyroOffsets(true);
}

//Moves The Robot Forward Or Backward Straightly
void Move_Straight(int Speed) {
  if (Speed > 0) {
    Speed = abs(Speed);
    Speed = map(Speed, 0, 100, 0, 255);
    analogWrite(SCP, Speed);
    digitalWrite(MP1, HIGH);
    digitalWrite(MP2, LOW);
  }
  else {
    Speed = abs(Speed);
    Speed = map(Speed, 0, 100, 0, 255);
    analogWrite(SCP, Speed);
    digitalWrite(MP1, LOW);
    digitalWrite(MP2, HIGH);
  }
}

//Moves The Steering Servo Motor So The Robot Steers
void Steer(int Angle) {
  Angle = map(Angle, -100, 100, 0, 180);
  steering.write(Angle);
}

//Stops The Robot
void Stop() {
  digitalWrite(MP1, LOW);
  digitalWrite(MP2, LOW);
}

//Makes The Robot Move Straightly Forward Without Any Deviation
void Gyro_Pid() {
  float kp, kd, old_error, error, d_filtered, last_d;
  int target_angle;
  mpu6050.update();
  error = target_angle - (mpu6050.getAngleZ() - old_error);
  float p = kp * error;
  float d_raw = p * (error - old_error);
  float d = d_filter_alpha * last_d + (1 - d_filter_alpha) * d_raw;
  float output = p+d;
  old_error = error;
  return output;
}

void loop() {
  while (true) {
    Gyro_Pid(100);
  }
}
