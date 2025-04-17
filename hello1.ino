void setup() {
  // Initialize Serial communication at 115200 baud rate
  Serial.begin(115200);
  
  // Wait for Serial port to connect (needed for USB CDC)
  while (!Serial) {
    delay(10); // Pause until Serial is ready
  }
  
  // Print "HELLO WORLD" once at startup
  Serial.println("HELLO WORLD");
}

void loop() {
  // Repeat "HELLO WORLD" every 2 seconds
  Serial.println("HELLO WORLD (Loop)");
  delay(2000); // Wait 2 seconds
}