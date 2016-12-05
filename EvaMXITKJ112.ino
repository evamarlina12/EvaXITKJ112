/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


const int ledPin13 = 13; //lampu yang tersambung dipanel 12
int analogValue = A0; // variable to hold the analog value
void setup() {
// open the serial port at 9600 bps:
Serial.begin(9600);
pinMode(ledPin13, OUTPUT);
}
void loop() {
// read the analog input on pin 0:
analogValue = analogRead(0);
Serial.println(analogValue); // debug value
if (analogValue >= 500) {
digitalWrite(ledPin13, HIGH);
}
else if (analogValue < 100) {
digitalWrite(ledPin13, LOW);
}
}

