#include <Arduino.h>
#include <math.h>

int analogPin = A0;
int analogValue = 0;
int green1 = 2;
int green2 = 3;
int yellow1 = 4;
int yellow2 = 5;
int red = 6;

const int fixvalue = 558;



void setup() {
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  analogValue = analogRead(analogPin);
  int absvalue = abs(analogValue - fixvalue);
  digitalWrite(green1,HIGH);
  if (absvalue>= 2) { digitalWrite(green1, HIGH);} else {digitalWrite(green1, LOW);} 
if (absvalue>= 4) { digitalWrite(green2, HIGH);} else {digitalWrite(green2, LOW);} 
if (absvalue>= 6) { digitalWrite(yellow1, HIGH);} else {digitalWrite(yellow1, LOW);} 
if (absvalue>= 10) { digitalWrite(yellow2, HIGH);} else {digitalWrite(yellow2, LOW);} 
if (absvalue>= 12) { digitalWrite(red, HIGH);} else {digitalWrite(red, LOW);} 
//   // Print the analog value


  delay(50);
  digitalWrite(green1,LOW);
  delay(50);
}
