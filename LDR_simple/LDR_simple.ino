//const int ldr = 8;
int ldrValue;
const int light = 3;

void setup()
{
  pinMode(light, OUTPUT);
//  pinMode(ldr, INPUT);
}

void loop()
{
//  ldrValue = digitalRead(ldr);
  
  if(ldrValue == LOW){
    digitalWrite(light, HIGH);
//    digitalWrite(ldr, HIGH);
    delay(1000);
    }
  else {
    digitalWrite(light, LOW);
//    digitalWrite(ldr, LOW);
     delay(1000);
  }
}
