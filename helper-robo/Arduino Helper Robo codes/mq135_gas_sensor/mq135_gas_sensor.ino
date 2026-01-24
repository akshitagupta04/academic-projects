#include <SoftwareSerial.h>

// select the input pin for the MQ-135 sensor
int sensorpin = A0;
// variable to store the value coming from the MQ-135 sensor
float sensorValue;

void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600);  // sets the serial port to 9600
}

void loop()
{
  sensorValue = analogRead(sensorpin);  // read analog input pin 0
  Serial.print("Air Quality = ");  //print the value of Air Quality read from the MQ-135 sensor
  Serial.print(sensorValue);
  Serial.println(" PPM");
  delay(2000);
}
