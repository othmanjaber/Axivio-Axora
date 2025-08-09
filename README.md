<center><h1> Axivio 2025 </center>

![Banner](./other/repository%20images/lm.png)

[![Instagram](https://img.shields.io/badge/Instagram-%23E4405F.svg?style=for-the-badge&logo=Instagram&logoColor=white)](https://www.instagram.com/axivio2025/)
[![Youtube](https://img.shields.io/badge/Youtube-%23FF0000.svg?style=for-the-badge&logo=Youtube&logoColor=white)](https://www.youtube.com/@Axivio-e1g)

This repository contains the official documentation for Axora, the robot was developed by the Axivio team for the 2025 World Robot Olympiad – Future Engineers competition. Axora was created by two dedicated students.

<h2 align="center"> Table of Contents</h2>

<table>
<tr>
<td>

**🚀 Overview**  
- [The Team](#team)  
- [The Challenge](#the-challenge)  
- [The Robot](#the-robot)  
- [Performance Video](#robot-video)  

**⚙️ Mobility Management**  
- [Powertrain](#powertrain)  
    - [Drivetrain](#drivetrain)  
    - [DC Motor](#dc-motor)  
    - [Motor Driver](#motor-driver)  
- [Steering](#steering)  
    - [Servo Motor](#servo)  
- [Chassis](#chassis)  

</td>
<td>

**🔋 Power & Sensors**  
- [Power Supply](#power-supply)  
- [Arduino Uno](#arduino-uno)  
- [MPU6050](#mpu6050)  
- [VL53L0X](#vl53l0x)  
- [Pixy2](#pixy2)  
- [Circuit Diagram](#circuit-diagram)  

**💻 Code for Components**  
- [DC Motor](#dc-motor-code)  
- [Servo Motor](#servo-motor-code)  
- [MPU6050 Sensor](#mpu6050-code)  
- [VL53L0X Sensor](#vl53l0x-code)  
- [Pixy2 Camera](#pixy2-code)  

**🛠 Obstacle Management**  
- [Qualification Round](#qualification-round)  
- [Final Round](#final-round)  
- [Additional Code](#additional-code)  

</td>
</tr>
</table>

---
## The Team <a class="anchor" id="team"></a>

### Othman Jaber
<p align="center">
  <img src="./t-photos/Othman jaber.jpg" alt="Othman Jaber" width="50%">
</p>

<b>Age:</b> 15

<b>School:</b> King Talal Secondary School, Nablus

<b>Description:</b> Hello, I'm Othman from Palestine, and this is my first time competing in WRO. I'm interested in programming, robotics, and astronomy. I like learning new things, solving problems, and playing games.

---

### Hamza Darawsheh
<p align="center">
  <img src="./t-photos/Hamza Darawsheh.jpg" alt="Hamza Darawsheh" width="40%">
</p>

<b>Age:</b> 15

<b>School:</b> The Islamiah Secondary School, Nablus

<b>Description:</b> Hey there! My name is Hamza, and I'm passionate about robotics and engineering. I enjoy working with electronics and programming, and I'm always excited to tackle new challenges. This WRO competition gives me the perfect opportunity to combine my interests in technology and problem-solving.

---

### Team photo
<p align="center">
  <img src="./t-photos/funny.jpg" alt="Team" width="50%">
</p>

## The Challenge <a class="anchor" id="the-challenge"></a>

The **[WRO 2025 Future Engineers - Self-Driving Cars](https://wro-association.org/)** challenge invites teams to design, build, and program a robotic vehicle capable of driving autonomously on a racetrack that changes dynamically for each round. The competition includes two main tasks: completing laps while navigating randomized obstacles and successfully performing a precise parallel parking maneuver. Teams must integrate advanced robotics concepts such as computer vision, sensor fusion, and kinematics, focusing on innovation and reliability.

This challenge emphasizes all aspects of the engineering process, including:
- **Mobility Management:** Developing efficient vehicle movement mechanisms.
- **Obstacle Handling:** Strategizing to detect and navigate traffic signs (red and green markers) within specified rules.
- **Documentation:** Showcasing engineering progress, design decisions, and open-source collaboration through a public GitHub repository.

Points are awarded based on performance in the challenge rounds, quality of the engineering documentation, and the ability to create an innovative and robust solution. The goal is to inspire STEM learning through real-world robotics applications, teamwork, and creative problem-solving.

Learn more about the challenge [here](https://wro-association.org/wp-content/uploads/WRO-2025-Future-Engineers-Self-Driving-Cars-General-Rules.pdf).

## Photos of our robot Axora <a class="anchor" id="the-robot"></a>

| <img src="./robot-photos/front.png" width="90%" /> | <img src="./robot-photos/back.png" width="85%" /> | 
| :--: | :--: | 
| *Front* | *Back* |
| <img src="./robot-photos/left.png" width="90%" /> | <img src="./robot-photos/right.png" width="85%" /> | 
| *Left* | *Right* |
| <img src="./robot-photos/top.png" width="90%" /> | <img src="./robot-photos/bottom.png" width="85%" /> | 
| *Top* | *Bottom* |

<br>

## Our video of the robot on [Youtube](https://www.youtube.com/watch?v=aLT0-nPUaAE) <a class="anchor" id="robot-video"></a>

<br>

# Mobility Management <a class="anchor" id="mobility-management"></a>

The robot's mobility is managed by a combination of components, including the powertrain, steering system, and chassis. These elements work together to ensure the robot's smooth and efficient movement.

## Powertrain <a class="anchor" id="powertrain"></a>

### Drivetrain <a class="anchor" id="drivetrain"></a>

Our drivetrain uses a direct drive system where the DC motor is connected directly to the rear axle. The rear wheels are mounted on a common axle for synchronized movement, while the front wheels are mounted independently to allow for steering. This simple but effective design minimizes mechanical complexity while providing reliable propulsion.

<br>

**Potential Improvements**:
- Add a differential system for smoother turning
- Implement encoder feedback for precise distance measurement
- Consider gear reduction for better torque control

---
### DC Motor <a class="anchor" id="dc-motor"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository images/dc motor.jpg" alt="DC Motor" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Voltage: 6V-12V (we used 9V)</li>
      <li>Current: 0.8A no load, 3.2A stall</li>
      <li>Speed: ~150 RPM at 9V</li>
      <li>Torque: ~2.5 kg·cm at 9V</li>
      <li>Weight: 55g</li>
    </td>
  </tr>
</table>

We selected a standard DC gearmotor for its simplicity and reliability. This motor provides sufficient torque for our robot while maintaining a compact form factor. The motor is secured to the chassis using a custom mounting bracket.

**Potential Improvements**:
- Add encoder for precise speed and position control
- Implement better motor mounting for reduced vibration
- Consider brushless motor for higher efficiency

---
### Motor Driver <a class="anchor" id="motor-driver"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="other/repository images/motor driver.jpg" alt="L298N Motor Driver" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Power supply voltage: 5V-35V</li>
      <li>Output current: 2A per channel (4A peak)</li>
      <li>Built-in 5V regulator</li>
      <li>Direction and PWM speed control</li>
      <li>Heat sink for thermal protection</li>
    </td>
  </tr>
</table>

We use the L298N motor driver to control both the drive motor and servo motor. This dual H-bridge driver allows precise control of motor direction and speed through PWM signals from the Arduino.

**Potential Improvements**:
- Add current sensing for motor feedback
- Implement better heat dissipation
- Use more efficient motor driver with lower voltage drop

## Steering <a class="anchor" id="steering"></a>

Our steering system uses a simple front-wheel steering mechanism controlled by a servo motor. The servo is connected to the front wheels through a mechanical linkage that turns both wheels simultaneously.

**Potential Improvements**:
- Implement Ackermann steering geometry for better turning
- Add steering angle feedback sensor
- Use stronger servo for more precise control

### Servo Motor <a class="anchor" id="servo"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository images/servo.jpg" alt="Servo Motor" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Weight: 9g</li>
      <li>Stall torque: 1.8 kgf·cm (4.8V)</li>
      <li>Operating speed: 0.12 s/60 degree (4.8V)</li>
      <li>Rotation angle: 180 degrees</li>
    </td>
  </tr>
</table>

We selected a standard 9g servo motor for steering control. This lightweight servo provides sufficient torque for steering while keeping the overall robot weight low.

**Potential Improvements**:
- Upgrade to metal gear servo for durability
- Add servo horn extension for better mechanical advantage
- Implement servo position feedback

## Chassis <a class="anchor" id="chassis-mechanical"></a>

Our chassis is built using acrylic or plywood material, designed to be lightweight yet sturdy. The chassis houses all electronic components and provides mounting points for motors, sensors, and other hardware.

The design prioritizes:
- Low center of gravity for stability
- Easy access to components for maintenance
- Proper weight distribution
- Compact form factor

**Potential Improvements**:
- Use carbon fiber for lighter weight
- Implement modular design for easy assembly
- Add vibration dampening materials
- Design better cable management system

# Power and Sense Management <a class="anchor" id="power-and-sense-management"></a>

The robot's power and sensor management system consists of several components working together to provide reliable power and accurate environmental sensing.

### Power Supply <a class="anchor" id="power-supply"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository images/battery.png" alt="Power Supply" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Type: Li-Po or NiMH battery pack</li>
      <li>Voltage: 7.4V-9V</li>
      <li>Capacity: 2000-3000mAh</li>
      <li>Discharge rate: 10C-20C</li>
    </td>
  </tr>
</table>

Our power system uses a rechargeable battery pack to provide clean, stable power to all components. The L298N driver includes a built-in 5V regulator to power the Arduino and sensors.

**Potential Improvements**:
- Add battery voltage monitoring
- Implement low battery warning system
- Use higher capacity battery for longer runtime

### Arduino Uno <a class="anchor" id="arduino-uno"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository images/arduino uno.jpg" alt="Arduino Uno" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Microcontroller: ATmega328P</li>
      <li>Flash memory: 32KB</li>
      <li>SRAM: 2KB</li>
      <li>Frequency: 16MHz</li>
      <li>Digital pins: 14</li>
      <li>Analog pins: 6</li>
      <li>Input voltage: 5V</li>
    </td>
  </tr>
</table>

The Arduino Uno serves as the main controller for our robot, managing all sensors and actuators. Its simplicity and extensive library support make it ideal for this application.

**Potential Improvements**:
- Upgrade to faster microcontroller for better performance
- Add external EEPROM for data logging
- Implement wireless communication capabilities

### MPU6050 <a class="anchor" id="mpu6050"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository images/mpu6050.jpg" alt="MPU6050" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Gyroscope range: ±250, ±500, ±1000, ±2000°/s</li>
      <li>Accelerometer range: ±2g, ±4g, ±8g, ±16g</li>
      <li>Interface: I2C</li>
      <li>Supply voltage: 2.375V to 3.46V</li>
      <li>Current consumption: 3.9mA</li>
    </td>
  </tr>
</table>

The MPU6050 provides 6-axis motion tracking (3-axis gyroscope + 3-axis accelerometer) essential for robot orientation and movement control. We use this sensor to maintain straight-line movement and accurate turning.

**Potential Improvements**:
- Implement sensor fusion algorithms for better accuracy
- Add magnetometer for absolute heading reference
- Use higher precision IMU for better performance

### VL53L0X <a class="anchor" id="vl53l0x"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository images/vl53l0x.jpeg" alt="VL53L0X" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Range: 30mm to 2000mm</li>
      <li>Accuracy: ±3% at 100-400mm</li>
      <li>Interface: I2C</li>
      <li>Supply voltage: 2.6V to 3.5V</li>
      <li>Current consumption: 20mA</li>
    </td>
  </tr>
</table>

The VL53L0X Time-of-Flight sensor provides precise distance measurements for obstacle detection and wall following. Its accuracy and fast response time make it ideal for navigation tasks.

**Potential Improvements**:
- Add multiple sensors for 360-degree coverage
- Implement sensor fusion with other distance sensors
- Use longer-range ToF sensors for better obstacle detection

### Pixy2 <a class="anchor" id="pixy2"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository images/pixy2.png" alt="Pixy2" width="100%">
    </td>
    <td width="50%" style="text-align: left; vertical-align: top;">
      <h3>Specifications:</h3>
      <li>Processor: NXP LPC4330 204 MHz dual core</li>
      <li>Image sensor: Aptina MT9M114</li>
      <li>Resolution: 1296×976</li>
      <li>Frame rate: 60 fps</li>
      <li>Interface: SPI, I2C, UART, USB</li>
      <li>Power consumption: 140 mA typical</li>
    </td>
  </tr>
</table>

The Pixy2 camera provides advanced computer vision capabilities for color detection and object tracking. It can detect colored objects, lines, and even perform simple AI tasks.

**Potential Improvements**:
- Train custom models for specific object detection
- Implement line following algorithms
- Add better mounting for stable image capture

### Circuit Diagram <a class="anchor" id="circuit-diagram"></a>

![Circuit diagram](./electrical-diagram/circuit.png "Circuit diagram")

# Code for each component <a class="anchor" id="code-for-each-component"></a>

## DC Motor <a class="anchor" id="dc-motor-code"></a>

The DC motor is controlled through the L298N motor driver using PWM signals for speed control and digital pins for direction control.

```cpp
// Motor pins
#define MOTOR_PWM 6
#define MOTOR_DIR1 7
#define MOTOR_DIR2 8

void motor_setup() {
  pinMode(MOTOR_PWM, OUTPUT);
  pinMode(MOTOR_DIR1, OUTPUT);
  pinMode(MOTOR_DIR2, OUTPUT);
}

void move_motor(int speed) {  // speed: -255 to +255
  if (speed > 0) {
    digitalWrite(MOTOR_DIR1, HIGH);
    digitalWrite(MOTOR_DIR2, LOW);
  } else if (speed < 0) {
    digitalWrite(MOTOR_DIR1, LOW);
    digitalWrite(MOTOR_DIR2, HIGH);
    speed = -speed;
  } else {
    digitalWrite(MOTOR_DIR1, LOW);
    digitalWrite(MOTOR_DIR2, LOW);
  }
  analogWrite(MOTOR_PWM, speed);
}

void motor_stop() {
  move_motor(0);
}
```

## Servo Motor <a class="anchor" id="servo-motor-code"></a>

The servo motor is controlled using the Arduino Servo library for precise angle positioning.

```cpp
#include <Servo.h>

Servo steeringServo;
#define SERVO_PIN 9
#define CENTER_ANGLE 90

void servo_setup() {
  steeringServo.attach(SERVO_PIN);
  steeringServo.write(CENTER_ANGLE);
  delay(500);
}

void steer(int angle) {  // angle: 0-180 degrees
  angle = constrain(angle, 0, 180);
  steeringServo.write(angle);
}

void steer_center() {
  steer(CENTER_ANGLE);
}

void steer_left() {
  steer(CENTER_ANGLE - 45);
}

void steer_right() {
  steer(CENTER_ANGLE + 45);
}
```

## MPU6050 Sensor <a class="anchor" id="mpu6050-code"></a>

The MPU6050 is used for orientation tracking and maintaining straight-line movement.

```cpp
#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;
float currentAngle = 0;
float targetAngle = 0;
unsigned long lastTime = 0;

void mpu_setup() {
  Wire.begin();
  mpu.initialize();
  
  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    return;
  }
  
  // Calibrate gyroscope
  calibrate_gyro();
}

void calibrate_gyro() {
  Serial.println("Calibrating gyroscope...");
  float gx_offset = 0, gy_offset = 0, gz_offset = 0;
  
  for (int i = 0; i < 1000; i++) {
    int16_t gx, gy, gz;
    mpu.getRotation(&gx, &gy, &gz);
    gx_offset += gx;
    gy_offset += gy;
    gz_offset += gz;
    delay(3);
  }
  
  gx_offset /= 1000;
  gy_offset /= 1000;
  gz_offset /= 1000;
  
  mpu.setXGyroOffset(gx_offset);
  mpu.setYGyroOffset(gy_offset);
  mpu.setZGyroOffset(gz_offset);
  
  Serial.println("Gyroscope calibrated");
}

void update_angle() {
  unsigned long currentTime = millis();
  float dt = (currentTime - lastTime) / 1000.0;
  
  int16_t gz;
  mpu.getRotation(NULL, NULL, &gz);
  
  float gyro_rate = gz / 131.0; // Convert to degrees/sec
  currentAngle += gyro_rate * dt;
  
  lastTime = currentTime;
}

float get_angle_error() {
  return targetAngle - currentAngle;
}

void set_target_angle(float angle) {
  targetAngle = angle;
}
```

## VL53L0X Sensor <a class="anchor" id="vl53l0x-code"></a>

The VL53L0X provides distance measurements for obstacle detection and navigation.

```cpp
#include <Wire.h>
#include <VL53L0X.h>

VL53L0X sensor;

void distance_setup() {
  Wire.begin();
  sensor.init();
  sensor.setTimeout(500);
  
  // Start continuous back-to-back mode
  sensor.startContinuous();
}

uint16_t get_distance() {
  return sensor.readRangeContinuousMillimeters();
}

bool is_obstacle_detected(uint16_t threshold_mm) {
  uint16_t distance = get_distance();
  return (distance < threshold_mm && distance != 0);
}

bool is_wall_close(uint16_t threshold_mm) {
  return is_obstacle_detected(threshold_mm);
}
```

## Pixy2 Camera <a class="anchor" id="pixy2-code"></a>

The Pixy2 camera is used for color detection and object tracking.

```cpp
#include <Pixy2.h>

Pixy2 pixy;

void pixy_setup() {
  pixy.init();
  Serial.println("Pixy2 initialized");
}

void detect_objects() {
  pixy.ccc.getBlocks();
  
  if (pixy.ccc.numBlocks) {
    Serial.print("Found ");
    Serial.print(pixy.ccc.numBlocks);
    Serial.println(" objects");
    
    for (int i = 0; i < pixy.ccc.numBlocks; i++) {
      Serial.print("Object ");
      Serial.print(i);
      Serial.print(": signature=");
      Serial.print(pixy.ccc.blocks[i].m_signature);
      Serial.print(" x=");
      Serial.print(pixy.ccc.blocks[i].m_x);
      Serial.print(" y=");
      Serial.print(pixy.ccc.blocks[i].m_y);
      Serial.print(" width=");
      Serial.print(pixy.ccc.blocks[i].m_width);
      Serial.print(" height=");
      Serial.println(pixy.ccc.blocks[i].m_height);
    }
  }
}

int get_largest_object_x() {
  pixy.ccc.getBlocks();
  
  if (pixy.ccc.numBlocks == 0) return -1;
  
  int largest_area = 0;
  int largest_x = -1;
  
  for (int i = 0; i < pixy.ccc.numBlocks; i++) {
    int area = pixy.ccc.blocks[i].m_width * pixy.ccc.blocks[i].m_height;
    if (area > largest_area) {
      largest_area = area;
      largest_x = pixy.ccc.blocks[i].m_x;
    }
  }
  
  return largest_x;
}

bool is_red_object_detected() {
  pixy.ccc.getBlocks();
  
  for (int i = 0; i < pixy.ccc.numBlocks; i++) {
    if (pixy.ccc.blocks[i].m_signature == 1) { // Assuming signature 1 is red
      return true;
    }
  }
  return false;
}

bool is_green_object_detected() {
  pixy.ccc.getBlocks();
  
  for (int i = 0; i < pixy.ccc.numBlocks; i++) {
    if (pixy.ccc.blocks[i].m_signature == 2) { // Assuming signature 2 is green
      return true;
    }
  }
  return false;
}
```

# Obstacle Management <a class="anchor" id="obstacle-management"></a>

## Qualification Round <a class="anchor" id="qualification-round"></a>

For the qualification round, the robot must complete laps around the track while detecting and responding to colored lines that indicate turning points.

```cpp
enum RobotState {
  DRIVING_STRAIGHT,
  TURNING_LEFT,
  TURNING_RIGHT,
  STOPPED
};

RobotState current_state = DRIVING_STRAIGHT;
int lap_count = 0;
int turn_count = 0;

void qualification_loop() {
  update_angle();
  detect_objects();
  
  switch(current_state) {
    case DRIVING_STRAIGHT:
      drive_straight();
      check_for_turns();
      break;
      
    case TURNING_LEFT:
      execute_left_turn();
      break;
      
    case TURNING_RIGHT:
      execute_right_turn();
      break;
      
    case STOPPED:
      motor_stop();
      break;
  }
}

void drive_straight() {
  float angle_error = get_angle_error();
  int steering_adjustment = angle_error * 2; // Simple P controller
  
  steer(CENTER_ANGLE - steering_adjustment);
  move_motor(150); // Move forward at moderate speed
}

void check_for_turns() {
  if (is_blue_line_detected()) {
    initiate_left_turn();
  } else if (is_orange_line_detected()) {
    initiate_right_turn();
  }
}

void initiate_left_turn() {
  current_state = TURNING_LEFT;
  set_target_angle(currentAngle - 90);
}

void initiate_right_turn() {
  current_state = TURNING_RIGHT;
  set_target_angle(currentAngle + 90);
}

void execute_left_turn() {
  float angle_error = get_angle_error();
  
  if (abs(angle_error) > 5) {
    steer_left();
    move_motor(120);
  } else {
    steer_center();
    current_state = DRIVING_STRAIGHT;
    turn_count++;
    check_lap_completion();
  }
}

void execute_right_turn() {
  float angle_error = get_angle_error();
  
  if (abs(angle_error) > 5) {
    steer_right();
    move_motor(120);
  } else {
    steer_center();
    current_state = DRIVING_STRAIGHT;
    turn_count++;
    check_lap_completion();
  }
}

void check_lap_completion() {
  if (turn_count >= 4) { // Completed one lap
    turn_count = 0;
    lap_count++;
    
    if (lap_count >= 3) { // Complete 3 laps
      current_state = STOPPED;
    }
  }
}
```

## Final Round <a class="anchor" id="final-round"></a>

The final round includes obstacle avoidance and parking challenges.

```cpp
enum FinalState {
  OBSTACLE_AVOIDANCE,
  PARKING_SEARCH,
  PARKING_MANEUVER,
  FINAL_STOP
};

FinalState final_state = OBSTACLE_AVOIDANCE;

void final_round_loop() {
  update_angle();
  detect_objects();
  
  switch(final_state) {
    case OBSTACLE_AVOIDANCE:
      avoid_obstacles();
      break;
      
    case PARKING_SEARCH:
      search_for_parking();
      break;
      
    case PARKING_MANEUVER:
      execute_parking();
      break;
      
    case FINAL_STOP:
      motor_stop();
      break;
  }
}

void avoid_obstacles() {
  int object_x = get_largest_object_x();
  
  if (object_x != -1) {
    // Object detected, steer to avoid
    int center_x = 158; // Pixy2 center x coordinate
    int steering_error = object_x - center_x;
    
    if (is_red_object_detected()) {
      // Red obstacle - turn right to avoid
      steer(CENTER_ANGLE + 30);
    } else if (is_green_object_detected()) {
      // Green obstacle - turn left to avoid
      steer(CENTER_ANGLE - 30);
    }
  } else {
    // No obstacles, drive straight
    drive_straight();
  }
  
  move_motor(140);
  
  // Check if we've completed enough laps to start parking
  if (lap_count >= 3) {
    final_state = PARKING_SEARCH;
  }
}

void search_for_parking() {
  // Look for parking spot markers
  if (is_parking_spot_detected()) {
    final_state = PARKING_MANEUVER;
  } else {
    drive_straight();
    move_motor(120);
  }
}

void execute_parking() {
  // Simplified parking maneuver
  // Move forward into parking space
  move_motor(100);
  delay(1000);
  
  // Stop
  final_state = FINAL_STOP;
}

bool
