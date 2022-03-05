/* 3 Minute Race Start Timer*/

int buttonPin = 10;  //Channel for input pushbutton

// setup initializes serial and the button pin

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP); // sets the digital pin 10 as input with internal 20k pullup
  pinMode(11, OUTPUT);    // sets the digital pin 9 as output
}

// loop checks the button pin each time,
// and will send serial if it is pressed
void loop() {

  if (digitalRead(buttonPin) == HIGH) {
    //Serial.println("H");
  }
  else {
    Serial.println("L");

// Warning horns – 6 short
  Serial.println("Warning horns - 6 short");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn               
    delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
      delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
     digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
 digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn               
    delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
      delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(54500);            // waits for 54.5 seconds
    
// 3 minute horn – 3 long
  Serial.println("3 minute horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
  delay(1000);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1 second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
  delay(1000);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1 second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
  delay(1000);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(55000);            // waits for 55 seconds

// 2 minute horn – 2 long
  Serial.println("2 minute horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
  delay(1000);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1 second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
  delay(1000);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(27000);            // waits for 27 seconds

// 1 minute 30 second horn – 1 long 3 short
  Serial.println("1 minute 30 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
  delay(1000);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn delay(500);            // waits for a second
    delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(26000);            // waits for 26 seconds

// 1 minute horn – 1 long 
  Serial.println("1 minute horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
  delay(1000);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
delay(29000);            // waits for 29 seconds

// 30 second horn – 3 short
  Serial.println("30 second horn");
      digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn               
delay(500);            // waits for 1 second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
      delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(7500);            // waits for 7.5 seconds

// 20 second horn – 2 short
  Serial.println("20 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
      delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(8500);            // waits for 8.5 seconds

// 10 second horn – 1 short
  Serial.println("10 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(4500);            // waits for 4.5 seconds

// 5 second horn – 1 short
  Serial.println("5 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second

// 4 second horn – 1 short
  Serial.println("4 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second

// 3 second horn – 1 short
  Serial.println("3 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second

// 2 second horn – 1 short
  Serial.println("2 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second

// 1 second horn – 1 short
  Serial.println("1 second horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(500);            // waits for half a second
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for half a second

// Start horn – 1 long
  Serial.println("START horn");
   digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
  delay(1500);            // waits for 1.5 a seconds
   digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1 second
  }

} // end loop
