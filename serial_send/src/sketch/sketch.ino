// send signals from PIN-0(analog) to computer
// note : to monitor the signal on arduino IDE, press [Serial Monitor] button

const int SENSOR = 0;    // the pin that connect with a sensor as a resistance 
int val = 0;             // the variable of value from a sensor

void setup() {
  Serial.begin(9600);    // open the serial-port
                         // send data to computer 9600 bit per second
}


void loop() {
  val = analogRead(SENSOR);  // gain value from a sensor
  
  Serial.println(val,DEC);  // write byte in arduino's sending buffer
  delay(1000);              // delay processing
}
