// Define the pins connected to the sensor outputs
const int sensorPin1 = A0; // Example: Analog pin A0
const int sensorPin2 = A1; // Example: Analog pin A1
const int sensorPin3 = A2; // Example: Analog pin A2
const int sensorPin4 = A3; // Example: Analog pin A3
const int sensorPin5 = A4; // Example: Analog pin A4

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read sensor values from each channel
  int value1 = analogRead(sensorPin1);
  int value2 = analogRead(sensorPin2);
  int value3 = analogRead(sensorPin3);
  int value4 = analogRead(sensorPin4);
  int value5 = analogRead(sensorPin5);

  // Print sensor values to the serial monitor
  Serial.print("Sensor 1: ");
  Serial.println(value1);
  Serial.print("Sensor 2: ");
  Serial.println(value2);
  Serial.print("Sensor 3: ");
  Serial.println(value3);
  Serial.print("Sensor 4: ");
  Serial.println(value4);
  Serial.print("Sensor 5: ");
  Serial.println(value5);

  // Add delay if needed
  delay(100); // Adjust as needed
}
