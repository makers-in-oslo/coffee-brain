// define pin used
 const int stepPin = 9;
 const int dirPin = 8; // Decides the direction
 
 int number_of_steps = 10000;

int led = 2;
int del = 500;

void setup() {
pinMode(led, OUTPUT);
 // set the two pins as outputs
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
}

void loop()
{

    //digitalWrite(led, HIGH);
    //delayMicroseconds(500);
    //digitalWrite(led, LOW);
    //delayMicroseconds(500);

for (int i = 0; i <= number_of_steps-1; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(del);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(del);
  }

delay(1000);
// Change direction
digitalWrite(dirPin,HIGH);



for (int i = 0; i <= number_of_steps-1; i++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(del);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(del);
  }


while(1){}
}
