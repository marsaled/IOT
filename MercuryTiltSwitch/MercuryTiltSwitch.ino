int ledPin = 13; // Change this to 2 for the built-in LED on many ESP32 boards

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
  Serial.println("ESP32 is starting...");
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on
  delay(1000);                  // Wait for a second
  digitalWrite(ledPin, LOW);    // Turn the LED off
  delay(1000);                  // Wait for a second
  Serial.println("Running...");
}
