const int buzzPin = 8;
const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

void setup() 
{
  pinMode(buzzPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = 0.034*(duration/2);
  Serial.print("distace :");
  Serial.println(distance);
  Serial.print("cm");
  delay(300);
 

  if (distance < 100 and distance > 50)
  {
    digitalWrite(buzzPin,HIGH);
    delay(500);
    digitalWrite(buzzPin,LOW);
    delay(500);
  }
  else if (distance < 50 and distance > 20) {
    digitalWrite(buzzPin,HIGH);
    delay(200);
    digitalWrite(buzzPin,LOW);
    delay(200);
    }
   else if (distance < 20) {
    digitalWrite(buzzPin,HIGH);
    delay(50);
    digitalWrite(buzzPin,LOW);
    delay(50);
    }
  delay(300);
  
  
}
