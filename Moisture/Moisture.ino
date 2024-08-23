// Define the analog pin for soil moisture sensor
const int soilMoisturePin = 34;  // GPIO pin where the sensor is connected

// Set the threshold for dry/moist soil
const int moistureThreshold = 70;  // You can adjust this value based on testing

void setup() {
  // Start the serial communication
  Serial.begin(115200);
  
  // Set the soil moisture pin as input
  pinMode(soilMoisturePin, INPUT);
} 

void loop() {
  // Read the analog value from the soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);
 
  // Map the sensor value to a percentage (optional)
  int moisturePercent = map(soilMoistureValue, 0, 4095, 0, 100);

  // Print the moisture value
  Serial.print("Soil Moisture Percentage: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  // Check if the soil is moist or dry
  if (moisturePercent > moistureThreshold) {
    Serial.println("Soil is Moist");
  } else {
    Serial.println("Soil is Dry");
  }

  // Wait for 1 second before the next reading
  delay(1000);
}
