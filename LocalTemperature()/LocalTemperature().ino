#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2  // Pin for connecting the DS18B20 sensor

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();  // Initialize the temperature sensor
}

void loop() {
  sensors.requestTemperatures();  // Request temperature reading

  // Read temperature in Celsius
  float temperatureC = sensors.getTempCByIndex(0);

  // Display the temperature on the smartwatch display
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println("°C");

  // Delay for 1 second (adjust as needed)
  delay(1000);
}
