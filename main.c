/* 
This program turns a LED on, changing its colour every second

Created on Feb 2025
By Daki A.B
*/ 

// set variable, blinkTime, to 1000
const int PIN_5 = 5;
const int PIN_6 = 6;
const int PIN_7 = 7;
int blinkTime = 1000;   

// Initialize digital pin LED_5, 6, and 7 as output
void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

// Changing LED colour by changing voltage levels in each pin (5,6,7)
void loop() {
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
 }
