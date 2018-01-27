#define sensor A0
float milliVoltage, temperature;

void setup(void) {
  Serial.begin(9600);
}

void loop(void) {
  milliVoltage = analogRead(sensor) * 5000.0 / 1023.0; 
  temperature = (milliVoltage - 500) / 10;
  
  Serial.print("  ADC Value = ");
  Serial.println(analogRead(sensor));

  Serial.print("  Temperature Value = ");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1000);
}
