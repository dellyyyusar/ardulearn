

int IN1 = 9;
int IN2 = 8;
int speedPinA = 10; // Needs to be a PWM pin to be able to control motor speed

int IN3 = 7;
int IN4 = 6;
int speedPinB = 5; // Needs to be a PWM pin to be able to control motor speed


void setup()
{
  // Set the output pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(speedPinA, OUTPUT);
  pinMode(speedPinB, OUTPUT);
}

void loop()
{
  analogWrite(speedPinA, 50); // Sets speed variable via PWM
  analogWrite(speedPinB, 50); // Sets speed variable via PWM
  // Rotate the Motor A clockwise
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000);
  // Motor A
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(500);

  // Rotate the Motor B clockwise
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(2000);
  // Motor B
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(500);

  // Rotates the Motor A counter-clockwise
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);
  // Motor A
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(500);

  // Rotates the Motor B counter-clockwise
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(2000);
  // Motor B
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(500);
}
