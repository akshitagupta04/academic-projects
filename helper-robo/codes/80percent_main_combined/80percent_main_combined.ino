#include <NewPing.h> // Include NewPing Library. // This uses Serial Monitor to display Range Finder distance readings
#include <SoftwareSerial.h>

// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;

SoftwareSerial mySerial(2, 3); // RX|TX

// select the input pin for the MQ-7 sensor
int sensorPin = A0;
// select the input pin for the MQ-135 sensor
int sensorpin = A0;
// variable to store the value coming from the MQ-7 sensor
float val;
// variable to store the value coming from the MQ-135 sensor
float sensorValue;

// Hook up HC-SR04 with Trig to Arduino Pin 9, Echo to Arduino pin 10
#define TRIGGER_PIN 9
#define ECHO_PIN 10

// Maximum distance we want to ping for (in centimeters).
#define MAX_DISTANCE 400  
// NewPing setup of pins and maximum distance.
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
float duration, distance;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);  // sets the serial port to 9600
mySerial.begin(9600);

{
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
}

void loop() {
{
    {
#define directionControl();
  delay(1000);
 #define speedControl();
  delay(1000);
    }

// This function lets you control spinning direction of motors
void directionControl() {
  {
  // Set motors to maximum speed
  // For PWM maximum possible values are 0 to 255
  analogWrite(enA, 255);
  analogWrite(enB, 255);

  // Turn on motor A & B
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
  
  // Now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
}
// Turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
    // This function lets you control speed of the motors
void speedControl() 
{
  // Turn on motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  // Accelerate from zero to maximum speed
  for (int i = 0; i < 256; i++) {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
  
  // Decelerate from maximum speed to zero
  for (int i = 255; i >= 0; --i) {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
  
  // Now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
}

{
  val = analogRead(sensorPin);    //// read analog input pin 0
Serial.print("amount of CO present is = ");      //print the value of CO read from the MQ-7 sensor 
Serial.print(val);
Serial.println(" PPM");
delay(2000);
}

{
   sensorValue = analogRead(sensorpin);  // read analog input pin 0
  Serial.print("Air Quality = ");  //print the value of Air Quality read from the MQ-135 sensor
  Serial.print(sensorValue);
  Serial.println(" PPM");
  delay(2000);
}

{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}

{
  
  // Send ping, get distance in cm
  distance = sonar.ping_cm();
  
  // Send results to Serial Monitor
  Serial.print("Distance = ");
  
  if (distance >= 400 || distance <= 2) 
  {
    Serial.println("Out of range");
  }
  else 
  {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(2000);
}
}
