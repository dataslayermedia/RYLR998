#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// write a function that submit this command every 3 seconds "AT+ADDRESS?"
void submitCommandEveryThreeSeconds() {
  unsigned long previousMillis = 0;
  const long interval = 3000; // interval at which to send command (milliseconds)

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    Serial.println("AT+ADDRESS?");
  }
}


// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}