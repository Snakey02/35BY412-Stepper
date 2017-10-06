/* Stepper Test Program
 *  
 *  B  P  Y  Or Red
 *  7  0  2 14 +V
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
  pinMode(4, OUTPUT);  // Blue
  pinMode(0, OUTPUT);  // Pink
  pinMode(2, OUTPUT); // Yellow
  pinMode(14, OUTPUT); // Orange
}

void loop() {
  // Runs the first line of the truth table, waits 4 milliseconds and runs the next line
  
  // Line 1:
  digitalWrite(4, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(14, LOW);

  delay(rate);
  
  // Line 2:
  digitalWrite(4, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(14, LOW);

  delay(rate);

  //Line 3:
  digitalWrite(4, HIGH);
  digitalWrite(0, LOW);
  digitalWrite(2, LOW);
  digitalWrite(14, HIGH);

  delay(rate);
  
  //Line 4:
  digitalWrite(4, HIGH);
  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(14, HIGH);

  delay(rate);

  //Line 5:
  digitalWrite(4, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(14, HIGH);

  delay(rate);

  //Line 6:
  digitalWrite(4, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(14, LOW);

}
