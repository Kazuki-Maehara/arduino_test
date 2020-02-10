// this program is a counter of cycle
// testing about cycle of pushing button

const int LED = 13;	// LED as button condition indicator
const int BUTTON = 7;	// BUTTON 7-pin

int val = 0;	// the value of button conditon
int old_val = 0;	// the value of button condition before it is pushed
int state = 0;		// LED state

void setup() {
	pinMode(LED, OUTPUT);	// setup the pinmode of LED
	pinMode(BUTTON, INPUT);	// setup the pinmode of BUTTON
	Serial.begin(9600);	// open a serial port at 9600 bps
}

void loop() {
	val = digitalRead(BUTTON);	// read the button's state

	//check change about val
	if ((val == HIGH) && (old_val == LOW)) {
		state = 1 - state;
		Serial.println(HIGH);
		delay(500);
	}
	
	old_val = val;	// set val in old_val
	if (state == 1) {
		digitalWrite(LED, HIGH);
	} else {
		digitalWrite(LED, LOW);
	}
}
	
