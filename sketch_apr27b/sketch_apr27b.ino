// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
//  pinMode(9, OUTPUT);
}
void loop() {
//        var btn_state_L
//        var btn_state_R
//
//      digitalWrite(4, LOW);
//      digitalWrite(5, LOW);

      
//      int  btnLeft = digitalRead(4);
//      int btnRight = digitalRead(5);
//      int  ledL = digitalRead(8);
//      int ledR = digitalRead(9);
//      int park_state  = digitalRead(4);


      while(park_state == HIGH){
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        delay(1000);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        delay(1000);
        }
//
//      while(park_state = 0){
////        digitalWrite(8, HIGH);
////        digitalWrite(9, HIGH);
////        delay(1000);
//        digitalWrite(8, LOW);
//        digitalWrite(9, LOW);
//        delay(1000);
//        }


//      if(btnRight == HIGH ){
//        digitalWrite(8, HIGH);
//        delay(1000);
//        digitalWrite(8, LOW);
//        delay(1000);
//        }
//
//      if(btnRight == HIGH){
//        digitalWrite(9, HIGH);
//        delay(1000);
//        digitalWrite(9, LOW);
//        delay(1000);
//        }


}
