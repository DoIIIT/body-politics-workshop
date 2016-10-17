//Myoware Muscle Sensor code

/* Connection diagram : Laptop ---- Usb Isolator --- Arduino --- Sensor
 * Connect USB Isolator to laptop using Micro USB
 * Connect Arduino to Isolator using Mini USB 
 * 
 * Pin connections (Sensor ---- Ardunio)
 *SIG --- A0 (or any other analog input pin)
 * + --- 3.3/5V (power pins)
 * - --- GND
*/

void setup() {
  Serial.begin(9600);
}


void loop() {
  int sensorValue = analogRead(A0); //define variable and read value from analog input pin A0
  Serial.println(sensorValue); //Print value of variable to serial monitor

  //If you want to use voltage range instead of sensor output, use the following lines in addition to above code
  //float voltage = sensorValue * (5.0 / 1023.0); //maps sensor output from 0-1023 to voltage output 0-5V
  //Serial.println(voltage); //print voltage value to serial monitor
  delay(100); //set delay for lopp i.e decide the frequency of reading inputs
}

