void setup(){
  pinMode(10, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  
  pinMode(6, INPUT_PULLUP);
  pinMode(7, OUTPUT);
  
  pinMode(1, INPUT_PULLUP);
  pinMode(2, OUTPUT);
}


void loop() {
  digitalWrite(11, digitalRead(10) == LOW ? HIGH : LOW);
  digitalWrite(7,  digitalRead(6)  == LOW ? HIGH : LOW);
  digitalWrite(2,  digitalRead(1)  == LOW ? HIGH : LOW);
}
