// Ultrasonic sensors
const int trigPin1 = 2;
const int echoPin1 = 10;
const int trigPin2 = 4;
const int echoPin2 = 5;
const int trigPin3 = 6;
const int echoPin3 = 7;

const int closeDistance = 15;


// Motor A
int directionPinA = 12;
int speedPinA = 3;
int brakePinA = 9;

// Motor B
int directionPinB = 13;
int speedPinB = 11;
int brakePinB = 8;

int getDistance(int trigPin, int echoPin) {   // Generate a pulse for the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);  // Measure the duration of the echo pulse
  int distance = duration * 0.034 / 2;  // Calculate the distance in centimeters
  return distance;
}

// Function to make the robot go straight (move forward)
void goStraight() {
  digitalWrite(brakePinA, LOW);        // Release brakes
  digitalWrite(brakePinB, LOW);        // Release brakes
  digitalWrite(directionPinA, HIGH);   // Motor A forward
  digitalWrite(directionPinB, LOW);   // Motor B forward

  // Set speed for both motors
  analogWrite(speedPinA, 170);  // Adjust the speed as needed (0 to 255)
  analogWrite(speedPinB, 170);  // Adjust the speed as needed (0 to 255)
}

// Function to stop the motors
void stopMotors() {
  // Brake both motors
  digitalWrite(brakePinA, HIGH);
  digitalWrite(brakePinB, HIGH);
}

void turnRight() {
  digitalWrite(directionPinA, HIGH);  // Set motor A to turn right
  digitalWrite(speedPinA, 200);       // Set speed to maximum
  digitalWrite(brakePinA, LOW);       // Disable brake for motor A

  digitalWrite(directionPinB, LOW);   // Set motor B to turn right
  digitalWrite(speedPinB, 50);       // Set speed to maximum
  digitalWrite(brakePinB, LOW);       // Disable brake for motor B
}

void turnLeft() {
  digitalWrite(directionPinA, LOW);   // Set motor A to turn left
  digitalWrite(speedPinA, 50);       // Set speed to maximum
  digitalWrite(brakePinA, LOW);       // Disable brake for motor A

  digitalWrite(directionPinB, HIGH);  // Set motor B to turn left
  digitalWrite(speedPinB, 200);       // Set speed to maximum
  digitalWrite(brakePinB, LOW);       // Disable brake for motor B
}

enum RobotState {
  STATE_STOPPED,
  STATE_GOING_STRAIGHT,
  STATE_TURNING_RIGHT,
  STATE_TURNING_LEFT,
  STATE_AVOID_OBSTACLE
};

// Variable to keep track of the current state
RobotState currentState = STATE_STOPPED;

void setup() {
 Serial.begin(9600);

  // Set the trig pins as OUTPUT and echo pins as INPUT
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  
  pinMode(directionPinA, OUTPUT);
  pinMode(speedPinA, OUTPUT);
  pinMode(brakePinA, OUTPUT);

  pinMode(directionPinB, OUTPUT);
  pinMode(speedPinB, OUTPUT);
  pinMode(brakePinB, OUTPUT);
  
  stopMotors();
}

void loop() {
int center = getDistance(trigPin1, echoPin1);
  int left = getDistance(trigPin2, echoPin2);
  int right = getDistance(trigPin3, echoPin3);

  Serial.print("Left: ");
  Serial.print(left);
  Serial.print(" cm ");

  Serial.print("Center: ");
  Serial.print(center);
  Serial.print(" cm ");

  Serial.print("Right: ");
  Serial.print(right);
  Serial.println(" cm");

  // Example: Switch states based on conditions
  if (center < closeDistance) {
    currentState = STATE_AVOID_OBSTACLE;
  } else if (left < closeDistance) {
    currentState = STATE_TURNING_RIGHT;
  } else if (right < closeDistance) {
    currentState = STATE_TURNING_LEFT;
  } else {
    currentState = STATE_GOING_STRAIGHT;
  }

  // Execute the appropriate function based on the current state
  switch (currentState) {
    case STATE_STOPPED:
      stopMotors();
      break;
    case STATE_GOING_STRAIGHT:
      goStraight();
      break;
    case STATE_TURNING_RIGHT:
      turnRight();
      break;
    case STATE_TURNING_LEFT:
      turnLeft();
      break;
    case STATE_AVOID_OBSTACLE:
      // Implement logic to avoid obstacle (e.g., turn away or stop)
      // For example, you can add code here to make the robot turn in the opposite direction.
      break;
    default:
      // Handle unexpected state
      break;
  }

  delay(100);
}
