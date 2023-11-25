#define trigPin1 4
#define echoPin1 5
#define trigPin2 6
#define echoPin2 7

// Motor A
int directionPinA = 12;
int speedPinA = 3;
int brakePinA = 9;

// Motor B
int directionPinB = 13;
int speedPinB = 11;
int brakePinB = 8;

void setup() {
  pinMode(directionPinA, OUTPUT);
  pinMode(speedPinA, OUTPUT);
  pinMode(brakePinA, OUTPUT);

  pinMode(directionPinB, OUTPUT);
  pinMode(speedPinB, OUTPUT);
  pinMode(brakePinB, OUTPUT);

  // Ultrasonic sensor pins
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  stopMotors();
}

void loop() {

  // Measure distance for sensor 1
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1 * 0.034 / 2;

  // Measure distance for sensor 2
  long duration2, distance2;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2 * 0.034 / 2;

  Serial.print("Distance 1: ");
  Serial.print(distance1);
  Serial.print(" cm | Distance 2: ");
  Serial.print(distance2);
  Serial.println(" cm");

  // Use switch statement based on sensor readings
  if (distance1 < 15 && distance2 < 15) {
    stop();
  } else if (distance1 < 15) {
    turnRight();
  } else if (distance2 < 15) {
    turnLeft();
  } else {
    goStraight();
  }

  delay(100);  // Adjust the delay as needed for your application
}
}


void goStraight() {
  digitalWrite(brakePinA, LOW);        // Release brakes
  digitalWrite(brakePinB, LOW);        // Release brakes
  digitalWrite(directionPinA, HIGH);   // Motor A forward
  digitalWrite(directionPinB, LOW);   // Motor B forward
  analogWrite(speedPinA, 175);  // Adjust the speed as needed (0 to 255)
  analogWrite(speedPinB, 175);  // Adjust the speed as needed (0 to 255)
}

void stopMotors() {
  digitalWrite(brakePinA, HIGH);
  digitalWrite(brakePinB, HIGH);
}
