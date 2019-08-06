/* === COFFEEBRAIN PROJECT === */

/* stepper motor control code for DRV8825 with NEMA 17 stepper motors
 * 
 */

 // define pin used
 const int stepPin = 9;
 const int dirPin = 8; // Decides the direction
 
 void setup() {
 // set the two pins as outputs
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);

}

void loop() {
digitalWrite(dirPin,HIGH); //Enables the motor to move in a perticular direction
// for one full rotation required 400 pulses
for(int x = 0; x < 400; x++){
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin,LOW);
  delayMicroseconds(500);
}
delay(1000); // delay for one second


digitalWrite(dirPin,HIGH); //Enables the motor to move in a opposite direction
// for three full rotation required 800 pulses
for(int x = 0; x < 800; x++){
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin,LOW);
  delayMicroseconds(500);
}
delay(1000); // delay for one second
}
