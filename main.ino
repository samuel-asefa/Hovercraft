#define liftMotor 5
#define thrustMotor 6

int runTime = 8000; // milliseconds

void setup() {
  pinMode(liftMotor, OUTPUT);
  pinMode(thrustMotor, OUTPUT);

  digitalWrite(liftMotor, HIGH);
  digitalWrite(thrustMotor, HIGH);

  delay(runTime);

  digitalWrite(liftMotor, LOW);
  digitalWrite(thrustMotor, LOW);
}

void loop() {
  
}
