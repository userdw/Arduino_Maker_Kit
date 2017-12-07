 #define sensor A0
float milliVoltage, temperature;

void setup(void) {
  pinMode (A0, INPUT);
  Serial.begin(9600);
}
void loop(void) {
  milliVoltage = analogRead(sensor) * 5000.0 / 1023.0; 
  temperature = (milliVoltage - 500) / 10;
  
  Serial.print("  ADC Value = ");
  Serial.println(analogRead(A0));

  Serial.print("  Temperature Value = ");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1000);
}
