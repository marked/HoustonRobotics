
/* PIR sensor tester*/
/* Teensy 4.1 LED pin 13 */

int ledPin    = 13; // choose the pin for the LED
int inputPin  = 23; // choose the input pin (for PIR sensor)
int buzzerPin = 22; 
int d = 1000; // polling / delay milliseconds

int readVal = 0; // variable for reading the pin status

void setup() {
	tone(buzzerPin,440,500);
  
  Serial.begin(9600);
  Serial.println();

  for (int i = 30; i > 0; i--) {
    Serial.print(i);
    Serial.print(" ");
    delay(1000); // waits for a second
	}

	pinMode(ledPin, OUTPUT); // declare LED as output
	pinMode(buzzerPin, OUTPUT); // declare buzzer as output
	pinMode(inputPin, INPUT); // declare sensor as input
  tone(buzzerPin,880,500);
  Serial.println();
  Serial.println("SENSOR STARTED");

	
}

void loop(){
	readVal = digitalRead(inputPin); // read input value

	if (readVal == HIGH) { // check if the input is HIGH
		digitalWrite(ledPin, HIGH); // turn LED ON    
		//Serial.println("X");
	} else {
		digitalWrite(ledPin, LOW); // turn LED OFF
		//Serial.println(".");
	}
  
  //delay(1000); // waits for a second
}

