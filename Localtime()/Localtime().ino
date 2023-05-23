#include <Arduino.h>
#include <ctime>

void displayLocalTime() {
  time_t now = time(nullptr);               // Get current system time
  struct tm* local = localtime(&now);       // Convert to local time

  int hours = local->tm_hour;
  int minutes = local->tm_min;
  int seconds = local->tm_sec;

  // Display the local time on the smartwatch
  Serial.print("Time: ");
  Serial.print(hours);
  Serial.print(":");
  Serial.print(minutes);
  Serial.print(":");
  Serial.println(seconds);
}

void setup() {
  Serial.begin(9600);    // Initialize serial communication
}

void loop() {
  displayLocalTime();

  // Delay for 1 second (adjust as needed)
  delay(1000);
}
