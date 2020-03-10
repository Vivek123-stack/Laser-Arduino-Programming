int laserPin = 8;

void setup() {                
  pinMode(laserPin, OUTPUT);  // Define the digital output interface pin 13 
}

void loop() {
  digitalWrite(laserPin, HIGH); // Open the laser head
}
