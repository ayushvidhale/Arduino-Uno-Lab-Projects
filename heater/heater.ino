const int led1 = 5;
const int led2 = 6;
const int led3 = 7;

int temp;

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT); 
  Serial.begin(9600); 
}

void loop() 
{
  int sensorValue = analogRead(A0);

  temp = map(sensorValue, 280,151,34,51);
  
  Serial.print(sensorValue);
  Serial.print("-"); 
  Serial.println(temp);
  delay(1000);
 
  if (temp >= 14 && temp < 20)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  if (temp >= 10 && temp < 14)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  
  delay(300);
}
