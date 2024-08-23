const int sensorPin = 23; // GPIO pin connected to the sensor's OUT pin
int sensorValue = 0;

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(sensorPin, INPUT); // Set the sensor pin as input
}

void loop() {
  sensorValue = digitalRead(sensorPin); // Read the sensor value
  if (sensorValue == HIGH) {
    Serial.println("Vibration detected!");
  } else {
    Serial.println("No vibration.");
  }
  delay(100); // Wait for a while before the next read
}
