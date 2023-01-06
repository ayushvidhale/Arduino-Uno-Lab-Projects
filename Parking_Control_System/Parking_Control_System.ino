// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop() {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);

      if(4, LOW){
      
        digitalWrite(8, HIGH);
        delay(1000);                       // wait for a second
        
        
        }

      if(5, LOW){
        digitalWrite(9, HIGH);
        delay(1000);                       // wait for a second
        }

      if(6, LOW){
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        delay(1000);                       // wait for a second
        }
        
        
}
