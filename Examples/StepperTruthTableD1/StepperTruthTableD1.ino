/* Stepper Shield Test Program
 *  B   P   Y   O   Red
 *  14  12  13  15  +V
 *  D5  D6  D7  D8
 *  1   1   1   0  
 *  1   1   0   0
 *  1   0   0   1
 *  1   0   1   1
 *  0   1   1   1
 *  0   1   1   0
 */

// Digital Connections v Physical Conections:
int Blue_Wire = 14; // D5
int Pink_Wire = 12; // D6
int Yellow_Wire = 13; // D7
int Orange_Wire = 15; // D8

int rate = 5; // Delay between the lines (speed of the stepper) - Max Speed 4

void setup() {
  // Set Pin States
  pinMode(Blue_Wire, OUTPUT);
  pinMode(Pink_Wire, OUTPUT);
  pinMode(Yellow_Wire, OUTPUT);
  pinMode(Orange_Wire, OUTPUT);
}

void loop() {
  // Runs the first line of the truth table, waits 4 milliseconds and runs the next line
  
  // Line 1:
  digitalWrite(Blue_Wire, HIGH);   // 1
  digitalWrite(Pink_Wire, HIGH);   // 1
  digitalWrite(Yellow_Wire, HIGH); // 1
  digitalWrite(Orange_Wire, LOW);  // 0

  delay(rate);
  
  // Line 2:
  digitalWrite(Blue_Wire, HIGH);  // 1
  digitalWrite(Pink_Wire, HIGH);  // 1
  digitalWrite(Yellow_Wire, LOW); // 0
  digitalWrite(Orange_Wire, LOW); // 0

  delay(rate);

  //Line 3:
  digitalWrite(Blue_Wire, HIGH);   // 1
  digitalWrite(Pink_Wire, LOW);    // 0
  digitalWrite(Yellow_Wire, LOW);  // 0
  digitalWrite(Orange_Wire, HIGH); // 1

  delay(rate);
  
  //Line 4:
  digitalWrite(Blue_Wire, HIGH);   // 1
  digitalWrite(Pink_Wire, LOW);    // 0
  digitalWrite(Yellow_Wire, HIGH); // 1
  digitalWrite(Orange_Wire, HIGH); // 1

  delay(rate);

  //Line 5:
  digitalWrite(Blue_Wire, LOW);    // 0
  digitalWrite(Pink_Wire, HIGH);   // 1
  digitalWrite(Yellow_Wire, HIGH); // 1
  digitalWrite(Orange_Wire, HIGH); // 1

  delay(rate);

  //Line 6:
  digitalWrite(Blue_Wire, LOW);    // 0
  digitalWrite(Pink_Wire, HIGH);   // 1
  digitalWrite(Yellow_Wire, HIGH); // 1
  digitalWrite(Orange_Wire, LOW);  // 0

}
