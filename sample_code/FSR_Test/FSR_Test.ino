/*
 * FSR testing sketch
 * Pin A3 is analog data in
 */

int fsrPin = A3;


int fsr_Reading = 0;

int fsrLastRead = 0;
int MIN_FSR = 0;
int MAX_FSR = 1023;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(fsrPin, INPUT);  

}

void loop() {

  fsr_Reading = analogRead(fsrCPin);

  Serial.print("FSR: ");
  Serial.println(fsrC_Reading);


  delay(500);
  
}










