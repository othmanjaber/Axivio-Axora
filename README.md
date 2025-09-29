# Axivio 2025 - Future Engineers 

<div align="center">

![Banner](./other/repository%20images/Team%20logo.png)

[![WRO 2025](https://img.shields.io/badge/WRO-2025%20Future%20Engineers-blue?style=for-the-badge&logo=robot&logoColor=white)](https://wro-association.org/)
[![Instagram](https://img.shields.io/badge/Instagram-%23E4405F.svg?style=for-the-badge&logo=Instagram&logoColor=white)](https://www.instagram.com/axivio2025/)
[![YouTube](https://img.shields.io/badge/YouTube-%23FF0000.svg?style=for-the-badge&logo=YouTube&logoColor=white)](https://www.youtube.com/@Axivio-e1g)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](LICENSE)

**Official documentation for Axora**

[Watch Demo](#performance-video) • [Documentation](#table-of-contents) • [Build Guide](#robot-construction-guide) • [Source Code](#source-code)

</div>

---

## Table of Contents
* [The Team](#team)
* [The Challenge](#challenge)
* [The Robot](#robot-image)
* [Performance Video](#video)
* [Mobility Management](#mobility-management)
  * [Powertrain](#powertrain-mechanical)
    * [Drivetrain](#drivetrain-mechanical)
    * [Motor](#motor-mechanical)
    * [Motor Driver](#motor-driver-mechanical)
  * [Steering](#steering-mechanical)
    * [Servo Motor](#servo-motor)
  * [Chassis](#chassis-mechanical)
* [Power and Sense Management](#power-and-sense-management)
  * [Power Supply](#power-supply)
  * [Arduino Uno](#arduino-uno)
  * [MPU6050](#mpu6050)
  * [VL53L0X](#vl53l0x)
  * [Pixy2](#pixy2)
  * [Circuit Diagram](#circuit-diagram)
* [Code for each component](#code-for-each-component)
  * [Drive Motor](#drive-motor-code)
  * [Servo Motor](#servo-motor-code)
  * [Camera](#camera-code)
  * [IMU](#gyro-sensor-code)
* [Obstacle Management](#obstacle-management)
  * [Qualification Round](#quali-management)
  * [Final Round](#final-management)
  * [Additional code](#additional-code)
* [Robot Construction Guide](#robot-construction-guide)
  * [Step 0: Print the 3D parts](#3d-printing)
  * [Step 1: Assemble the steering system](#steering-system-assembly)
  * [Step 2: Assemble the powertrain](#powertrain-assembly)
  * [Step 3: Attach the electronics](#electronics-attachment)
  * [Step 4: Attach the wheels](#wheel-attachment)
  * [Step 5: Final touches](#final-touches)
  * [Step 6: Upload the code](#code-upload)
* [Cost Report](#cost-report)
  * [3D Printing Costs](#3d-printing-costs)
  * [Summary of Costs](#summary-of-costs)
* [Resources](#resources)
  * [3D Models](#3d-models-resources)
  * [Images](#images-resources)
* [License](#copyright)

---

## The Team <a class="anchor" id="team"></a>

<div align="center">


</div>

<tr>
<td align="center" width="50%">

### Othman Jaber
<img src="./t-photos/Othman%20jaber.jpg" width="200" style="border-radius: 70%"/>

**Age:** 15 • **School:** King Talal Secondary School, Nablus

short message : Hi, I'm Othman from Palestine, and this is my first time competing in WRO. I'm interested in programming, robotics, and astronomy. I like learning new things, solving problems, and playing games.

Gmail : <othmanjaber78@gmail.com>

---

</td>
<td align="center" width="50%">

### Hamza Darawsheh
<img src="./t-photos/Hamza%20Darawsheh.jpg" width="200" style="border-radius: 70%"/>

**Age:** 15 • **School:** The Islamiah Secondary School, Nablus

short message : Hey there! My name is Hamza, and I'm passionate about robotics and engineering. I enjoy working with electronics and programming, and I'm always excited to tackle new challenges. This WRO competition gives me the perfect opportunity to combine my interests in technology and problem-solving.

Gmail : <hamzadarawsheh321@gmail.com>
</td>
</tr>

---

<tr>
<td align="center" colspan="2">

### Hamed Zafer
<img src="./t-photos/Hamed%20zafer.jpg" width="200" style="border-radius: 100%"/>

**Role:** Coach

 Gmail : <Hamed7710@gmail.com>
 
---
</td>
</tr>

<div align="center">

### Team Photo
<img src="./t-photos/funny.jpg" width="400"/>

</div>

---

## The Challenge <a class="anchor" id="challenge"></a>

The **[WRO 2025 Future Engineers - Self-Driving Cars](https://wro-association.org/)** challenge invites teams to design, build, and program a robotic vehicle capable of driving autonomously on a racetrack that changes dynamically for each round. The competition includes two main tasks: completing laps while navigating randomized obstacles and successfully performing a precise parallel parking maneuver. Teams must integrate advanced robotics concepts such as computer vision, sensor fusion, and kinematics, focusing on innovation and reliability.

Learn more about the challenge [here](https://wro-association.org/wp-content/uploads/WRO-2025-Future-Engineers-Self-Driving-Cars-General-Rules.pdf).

## Axora - Our Robot <a class="anchor" id="robot-image"></a>

<table>
<tr>
<td align="center"><img src="./v-photos/front.png" width="250"/><br/><b>Front</b></td>
<td align="center"><img src="./v-photos/back.png" width="250"/><br/><b>Back</b></td>
<td align="center"><img src="./v-photos/left.png" width="250"/><br/><b>Left</b></td>
</tr>
<tr>
<td align="center"><img src="./v-photos/right.png" width="250"/><br/><b>Right</b></td>
<td align="center"><img src="./v-photos/top.png" width="250"/><br/><b>Top</b></td>
<td align="center"><img src="./v-photos/bottom.png" width="250"/><br/><b>Bottom</b></td>
</tr>
</table>
</div>

---

# Mobility Management <a class="anchor" id="mobility-management"></a>

The robot's mobility is managed by a combination of components, including the powertrain, steering system, and chassis. These elements work together to ensure the robot's smooth and efficient movement.

## Powertrain <a class="anchor" id="powertrain-mechanical"></a>

### Drivetrain <a class="anchor" id="drivetrain-mechanical"></a>

Our drivetrain uses a direct drive system where the DC motor is connected directly to the rear axle. The rear wheels are mounted on a common axle for synchronized movement, while the front wheels are mounted independently to allow for steering. This simple but effective design minimizes mechanical complexity while providing reliable propulsion.

**Potential Improvements**:
- Add a differential system for smoother turning
- Implement encoder feedback for precise distance measurement
- Consider gear reduction for better torque control

### Motor <a class="anchor" id="motor-mechanical"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository%20images/dc%20motor.jpg" alt="DC Motor" width="100%">
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

<img src="other/repository images/axis 3d.png" width=500> <img src="other/repository images/axis 2d.png" height=300>

to connect the dc motor with the wheels, we made this 3d design axle to connect between them.


### Motor Driver <a class="anchor" id="motor-driver-mechanical"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="other/repository%20images/motor%20driver.jpg" alt="L298N Motor Driver" width="100%">
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

## Steering <a class="anchor" id="steering-mechanical"></a>

Our steering system uses a simple front-wheel steering mechanism controlled by a servo motor. The servo is connected to the front wheels through a mechanical linkage that turns both wheels simultaneously.

**Potential Improvements**:
- Implement Ackermann steering geometry for better turning
- Add steering angle feedback sensor
- Use stronger servo for more precise control

### Servo Motor <a class="anchor" id="servo-motor"></a>

<table>
  <tr>
    <td width="50%" style="text-align: left;">
      <img src="./other/repository%20images/servo.jpg" alt="Servo Motor" width="100%">
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

Our chassis is built using 3D printed components, designed to be lightweight yet sturdy. The chassis houses all electronic components and provides mounting points for motors, sensors, and other hardware.

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
      <img src="./other/repository%20images/battery.png" alt="Power Supply" width="100%">
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
      <img src="./other/repository%20images/arduino%20uno.jpg" alt="Arduino Uno" width="100%">
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
      <img src="./other/repository%20images/mpu6050.jpg" alt="MPU6050" width="100%">
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
      <img src="./other/repository%20images/vl53l0x.jpeg" alt="VL53L0X" width="100%">
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
      <img src="./other/repository%20images/pixy2.png" alt="Pixy2" width="100%">
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

<img src = "schemes/circuit diagram.png">

# Code for each component <a class="anchor" id="code-for-each-component"></a>

## Drive Motor <a class="anchor" id="drive-motor-code"></a>

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

## Camera <a class="anchor" id="camera-code"></a>

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

## IMU <a class="anchor" id="gyro-sensor-code"></a>

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

# Obstacle Management <a class="anchor" id="obstacle-management"></a>

## Qualification Round <a class="anchor" id="quali-management"></a>

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

## Final Round <a class="anchor" id="final-management"></a>

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
  
  // Check if we've complete
