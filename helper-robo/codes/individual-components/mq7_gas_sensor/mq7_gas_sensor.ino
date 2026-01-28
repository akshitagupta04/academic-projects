#include <SoftwareSerial.h>

// select the input pin for the MQ-7 sensor
int sensorPin = A0;

// variable to store the value coming from the MQ-7 sensor
float val;

void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600);  // sets the serial port to 9600
}

void loop()
{
  val = analogRead(sensorPin);    //// read analog input pin 0
Serial.print("amount of CO present is = ");      //print the value of CO read from the MQ-7 sensor 
Serial.print(val);
Serial.println(" PPM");
delay(2000);
}
