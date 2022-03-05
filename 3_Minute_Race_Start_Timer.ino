/* 3 Minute Race Start Timer*/

// SPDX-License-Identifier: MIT

//  3 Minute Race Start Timer
//  Developed for CreekFleet Racing
//  by Marc Meyer
//  8/16/2021


int buttonPin = 6;  //Channel for input pushbutton


// setup initializes serial and the button pin

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP); // sets the digital pin 6 as input with internal 20k pullup
  pinMode(9, OUTPUT);    // sets the digital pin 9 as output
}

// Loop checks the button pin and will start timer if pressed.
// If pressed a second time, timer aborts & starts over

void loop() {

bailout: if (digitalRead(buttonPin) == HIGH) {
    //Serial.println("H");
  }
  else {
    //Serial.println("L");

    // Warning horns – 8 short
    Serial.println("Warning horns - 8 short");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(250);            // waits for 0.25 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
   // if (digitalRead(buttonPin) == LOW) {
   //   goto bailout;
   // }
    delay(56250);            // waits for 56.25 seconds

    // 3 minute horn – 3 long
    //Serial.println("3 minute horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
    delay(1000);            // waits for 1 second
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1000 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
    delay(1000);            // waits for 1 second
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1 second
    digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
    delay(1000);            // waits for 1 second
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(55000);            // waits for 55 seconds


    // 2 minute horn – 2 long
    //Serial.println("2 minute horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
    delay(1000);            // waits for 1 second
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1 second
    digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
    delay(1000);            // waits for 1 second
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(27000);            // waits for 27 seconds


    // 1 minute 30 second horn – 1 long 3 short
    //Serial.println("1 minute 30 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
    delay(1000);            // waits for 1 second
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn delay(500);            // waits for a second
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(26000);            // waits for 26 seconds


    // 1 minute horn – 1 long
    //Serial.println("1 minute horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for long horn
    delay(1000);            // waits for 1 second
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(29000);            // waits for 29 seconds


    // 30 second horn – 3 short
    //Serial.println("30 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(7500);            // waits for 7.5 seconds


    // 20 second horn – 2 short
    //Serial.println("20 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(8500);            // waits for 8.5 seconds


    // 10 second horn – 1 short
    //Serial.println("10 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(4500);            // waits for 4.5 seconds


    // 5 second horn – 1 short
    //Serial.println("5 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(500);            // waits for 0.5 seconds


    // 4 second horn – 1 short
    //Serial.println("4 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(500);            // waits for 0.5 seconds


    // 3 second horn – 1 short
    //Serial.println("3 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(500);            // waits for 0.5 seconds


    // 2 second horn – 1 short
    //Serial.println("2 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(500);            // waits for 0.5 seconds


    // 1 second horn – 1 short
    //Serial.println("1 second horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(500);            // waits for 0.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    if (digitalRead(buttonPin) == LOW) {
      goto bailout;
    }
    delay(500);            // waits for 0.5 seconds


    // Start horn – 1 long
    //Serial.println("START horn");
    digitalWrite(9, HIGH); // sets the digital pin 9 on for short horn
    delay(1500);            // waits for 1.5 seconds
    digitalWrite(9, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for 1 second

  }

} // end loop
