int led = 13; // Pin 13 for onboard LED
int pot_sensor = 2; // Pin 2 for SoftPot

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);    
  Serial.begin(9600); 
}

// the loop routine runs over and over again forever:
void loop() {
  int output = analogRead(2); 
  // the output from SoftPot, range from 0 to 1023
  
  // blink the LED
  digitalWrite(led, HIGH);
  delay(output);
  digitalWrite(led, LOW);
  delay(output);
}
