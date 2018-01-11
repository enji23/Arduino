/*********
  Rui Santos
  Complete project details at http://randomnerdtutorials.com  
*********/

// Including the ESP8266 WiFi library
#include <ESP8266WiFi.h>
#include <time.h>
#include "Settings.h"
void blinkLed(int led, int blink_delay, int num);
void someBlink();

// variables
String header;
int syslog_rate = 30;   				// send all <syslog_rate> in seconds a message
int iteration = 1;

void blinkLed(int led, int blink_delay, int num) {
  for( int c = 1; c == num; c++) {
    digitalWrite(led, LOW);
    delay(1000);
    digitalWrite(led, HIGH);
  };
}

void someBlink() {
    blinkLed(BLUE_LED, 100, 2);
    delay(100);
    blinkLed(RED_LED, 100, 3);
    delay(100);
    blinkLed(BLUE_LED, 100, 4);
    delay(100);
    blinkLed(RED_LED, 100, 5);
}

void setup() {
  Serial.begin(115200);
  delay(10);
  pinMode(BLUE_LED, OUTPUT);
  digitalWrite(BLUE_LED, HIGH);
  pinMode(RED_LED, OUTPUT);
  digitalWrite(RED_LED, HIGH);
} 

void loop() {
  Serial.println("Start Blinking");
  someBlink();
  Serial.println("Stop Blinking");
  delay(1000);
}
