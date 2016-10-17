/*
 * FSR testing sketch
 * Pin A0 is analog data in
 */

//int fsrAPin = A1;
//int fsrBPin = A2;
int fsrCPin = A3;

//int fsrA_Reading = 0;
//int fsrB_Reading = 0;
int fsrC_Reading = 0;

int fsrLastRead = 0;
int MIN_FSR = 0;
int MAX_FSR = 1023;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(fsrAPin, INPUT);
  //pinMode(fsrBPin, INPUT);
  pinMode(fsrCPin, INPUT);  

}

void loop() {
  //fsrA_Reading = analogRead(fsrAPin);
  //fsrB_Reading = analogRead(fsrBPin);
  fsrC_Reading = analogRead(fsrCPin);

//  Serial.print("FSR1: ");
//  Serial.println(fsrA_Reading);
//  Serial.print("FSR2: ");
//  Serial.println(fsrB_Reading);
//  Serial.print("FSR3: ");
  Serial.println(fsrC_Reading);


  delay(500);
  
}










