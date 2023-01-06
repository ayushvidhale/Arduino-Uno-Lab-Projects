void setup() {
Serial.begin(9600);
 pinMode(3, OUTPUT); 
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
//    Serial.println("HelloWOrld!");
    char data= Serial.read(); 
      switch(data)
      {
        case '1': digitalWrite(3, HIGH);break; 
        case '2': digitalWrite(4, HIGH);break;         
        case '3': digitalWrite(5, HIGH);break;

        case '4': digitalWrite(3, LOW);break; 
        case '5': digitalWrite(4, LOW);break;         
        case '6': digitalWrite(5, LOW);break;
        
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
