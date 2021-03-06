/* Stepper Motor Test Program
 *  B  P  Y  Or Red
 *  8  9  10 11 +V
 *  
 *  1  1  1  0  
 *  1  1  0  0
 *  1  0  0  1
 *  1  0  1  1
 *  0  1  1  1
 *  0  1  1  0
 */

int rate = 4; // Delay between the lines (speed of the stepper) - Max Speed 4

// Stepper Connections v Arduino Connections
int Blue_Wire = 8;
int Pink_Wire = 9;
int Yellow_Wire = 10;
int Orange_Wire = 11;

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
