const int sensorPin = 14; // GPIO pin connected to the sensor's OUT pin
const int ledPin = 26;    // GPIO pin connected to the LED

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(sensorPin, INPUT); // Set the sensor pin as input
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
}

void loop() {
  int sensorValue = digitalRead(sensorPin); // Read the sensor value

  if (sensorValue == HIGH) {
    Serial.println("Vibration detected!"); // Output when vibration is detected
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    Serial.println("No vibration."); // Output when no vibration is detected
    digitalWrite(ledPin, LOW); // Turn off the LED
  }

  delay(100); // Delay to avoid flooding the Serial Monitor
}