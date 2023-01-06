const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete

void setup() {
  // initialize serial:
 pinMode(led1 , OUTPUT);
 pinMode(led2 , OUTPUT);
 pinMode(led3 , OUTPUT);
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
}

void loop() {
  
  // print the string when a newline arrives:
  if (stringComplete) {
    Serial.println(inputString);
    // clear the string:
    inputString = "";
    stringComplete = false;
  }
  
  if( inputString == "red")
{
  digitalWrite(led1,HIGH);
  delay(2000);
  digitalWrite(led1,LOW);
  
  }  
else if( inputString == "yellow")
{
  digitalWrite(led2,HIGH);
  delay(2000);
  digitalWrite(led2,LOW);
  }  
else if( inputString == "green")
{
  digitalWrite(led3,HIGH);
  delay(2000);
  digitalWrite(led3,LOW);
  }  
  else if( inputString == "MUGEMIN")
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  } 
}


void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}
