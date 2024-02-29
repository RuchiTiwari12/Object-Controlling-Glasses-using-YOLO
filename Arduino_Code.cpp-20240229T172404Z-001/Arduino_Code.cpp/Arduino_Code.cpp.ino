const int ledPin = 7;
const int ledPin2 = 7; // Assuming the LED is connected to pin 7

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin 7 as an output
  Serial.begin(9600); // Begin serial communication
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();
    if (receivedChar == 'H') {
      digitalWrite(ledPin, HIGH); // Turn on the LED
      Serial.println("LED turned ON");
    } else if (receivedChar == 'L') {
      digitalWrite(ledPin, LOW); // Turn off the LED
      Serial.println("LED turned OFF");
    }
  }
}
