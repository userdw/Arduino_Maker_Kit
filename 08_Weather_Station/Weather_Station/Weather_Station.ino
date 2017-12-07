 #define sensor A0
float milliVoltage, temperature;

void setup(void) {
  pinMode (A0, INPUT);
  Serial.begin(9600);
}

/*Rumus mencari suhu pada MCP9700
 * Vout = (ADC / Resolusi ADC (1023)) x Vref (5V)
 * dikurangi 500mv karena 0°C pada sensor MCP9700 adalah 500mv
 * dibagi 10 karena typical sensor MCP9700 yaitu 10mV/°C
 */
void loop(void) {
  milliVoltage = analogRead(sensor) * 5000.0 / 1023.0; 
  temperature = (milliVoltage - 500) / 10;
  
  Serial.print("  ADC = ");
  Serial.println(analogRead(A0));

  Serial.print("  Suhu = ");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1000);
}
