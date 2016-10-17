/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control.
  On the Lilypad it is connected to Pin 13
  On the Flora it is connected to Pin 7

  Adapted for Wearable Workshop from Code by Scott Fitzgerald
 */
int onboardLED = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600);
  pinMode(onboardLED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(onboardLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);              // wait for a second
  digitalWrite(onboardLED, LOW);    // turn the LED off by making the voltage LOW
  delay(3000); 
  Serial.println("read");
}
void blinkLED(int LEDpin){

}

