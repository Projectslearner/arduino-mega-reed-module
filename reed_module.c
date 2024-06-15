/*
    Project name : Reed module
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-reed-module
*/

const int reedPin = 2; // Pin connected to the reed switch module
int reedState = 0;     // Variable to store the reed switch state

void setup() {
  Serial.begin(9600);           // Initialize serial communication
  pinMode(reedPin, INPUT_PULLUP); // Set reed switch pin as INPUT with internal pull-up
}

void loop() {
  reedState = digitalRead(reedPin); // Read the state of the reed switch

  if (reedState == LOW) { // Reed switch is triggered
    Serial.println("Magnet detected!");
  } else { // Reed switch is not triggered
    Serial.println("No magnet detected.");
  }

  delay(500); // Delay to avoid spamming the Serial Monitor
}
