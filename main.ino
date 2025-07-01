
void setup(){
  pinMode(11, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  
  pinMode(6, INPUT_PULLUP);
  
  pinMode(1, INPUT_PULLUP);
  pinMode(2, OUTPUT); 
}

void loop() {
  digitalWrite(12, digitalRead(11) == HIGH ? HIGH : LOW); 
  digitalWrite(7,  digitalRead(6)  == HIGH ? HIGH : LOW);
  digitalWrite(2,  digitalRead(1)  == HIGH ? HIGH : LOW);
}