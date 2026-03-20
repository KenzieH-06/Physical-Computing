// Define pins
const int trigPin = 9;
const int echoPin = 10;
const int redLED = 3;
const int greenLED = 4;
const int yellowLED =5;

long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send 10 microsecond pulse to trigger
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echoPin, return sound wave travel time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance (speed of sound = 343 m/s)
  distance = duration * 0.0343 / 2;

  // Print distance in cm
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);


  if (distance>50){
    digitalWrite(redLED,LOW);
    digitalWrite(greenLED,HIGH);
    digitalWrite(yellowLED,LOW);
  }
  else if (distance>20){
      digitalWrite(redLED,LOW);
      digitalWrite(greenLED,LOW);
      digitalWrite(yellowLED,HIGH);
  }
  else{
      digitalWrite(redLED,HIGH);
      digitalWrite(greenLED,LOW);
      digitalWrite(yellowLED,LOW);
  }

  // digitalWrite(redLED,HIGH);
  // digitalWrite(greenLED,HIGH);
  // digitalWrite(yellowLED,HIGH);
}