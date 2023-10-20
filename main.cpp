// IR Obstacle Collision Detection Modules
  int leftPin = 7; // This is our input pin
  int left = HIGH; // HIGH MEANS NO OBSTACLE

  int rightPin = 6; // This is our input pin
  int right = HIGH; // HIGH MEANS SURFACE

  int ObstaclePin = 4; // This is our input pin
  int Obstacle = HIGH; // HIGH MEANS NO OBSTACLE

//Motor Section
  int directionPin = 12;
  int speedPin = 3;
  int brakePin = 9;

    //uncomment if using channel B, and remove above definitions
    //int directionPin = 13;
    //int pwmPin = 11;
    //int brakePin = 8;




void setup() {
  Serial.begin(9600);

  pinMode(leftPin, INPUT);
  pinMode(rightPin, INPUT);
  pinMode(3, OUTPUT);
  pinMode(directionPin, OUTPUT);
  pinMode(speedPin, OUTPUT);
  pinMode(brakePin, OUTPUT);
  
}
  
void loop() {

left = digitalRead(leftPin);
right = digitalRead(rightPin);

if (right == LOW){
    Serial.println("Obstacle Right");
  } else {
  Serial.println("");
  }

if (left == LOW) {
  Serial.println("Obstacle left");
  } else {
  Serial.println("");
  }
  delay(100);

  pinMode(3, HIGH);


if (right == HIGH && left == HIGH){    //If path is CLEAR - drive forward.
digitalWrite(brakePin, LOW);//release breaks
analogWrite(speedPin, 100);//set work duty for the motor
digitalWrite(directionPin, LOW); //FORWARD
} else {
  digitalWrite(brakePin, HIGH);//activate breaks
} 


/*
digitalWrite(brakePin, LOW);//release breaks
analogWrite(speedPin, 255);//set work duty for the motor
digitalWrite(directionPin, HIGH);

delay(2000);
digitalWrite(brakePin, HIGH);//release breaks
delay(2000);
*/

}





