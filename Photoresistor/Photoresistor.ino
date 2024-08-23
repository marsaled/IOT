// Define the analog input pin
const int LDR_PIN = 32; // GPIO pin connected to the photoresistor

void setup() {
  // Start the serial communication
  Serial.begin(115200);
  delay(1000); // Wait for serial monitor to initialize
}

void loop() {
  // Read the analog value from the LDR
  int ldrValue = analogRead(LDR_PIN);

  // Print the value to the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Add a delay to avoid overwhelming the Serial Monitor
  delay(500);
}
