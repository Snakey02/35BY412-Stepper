/* Stepper Test Program
 *  
 *  B  P  Y  Or Red
 *  7  9  10 11 +V
 *  
 *  1  1  1  0  
 *  1  1  0  0
 *  1  0  0  1
 *  1  0  1  1
 *  0  1  1  1
 *  0  1  1  0
 */

int rate = 5; // Delay between the lines (speed of the stepper) - Max Speed 4

void setup() {
  // Set Pin States
  pinMode(8, OUTPUT);  // Blue
  pinMode(9, OUTPUT);  // Pink
  pinMode(10, OUTPUT); // Yellow
  pinMode(11, OUTPUT); // Orange
}

void loop() {
  // Runs the first line of the truth table, waits 4 milliseconds and runs the next line
  
  // Line 1:
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  delay(rate);
  
  // Line 2:
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(rate);

  //Line 3:
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(rate);
  
  //Line 4:
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  delay(rate);

  //Line 5:
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  delay(rate);

  //Line 6:
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

}
