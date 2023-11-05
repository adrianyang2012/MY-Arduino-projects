int p1_state = 0;
int p2_state = 0;
void setup() {
  // put your setup code here, to run once:
  //do only once
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //stuff
  p1_state = digitalRead(2);
  p2_state = digitalRead(3);
  int winner = 0;
  if (p1_state == HIGH){
    winner = 1;
  }
  if (p2_state == HIGH){
    winner = 2;
  }
  if (winner > 0) {
    
    digitalWrite(7+winner,HIGH);
    for (int i = 0;  digitalRead(7)==HIGH; i++){
      delay(1);
    }
    digitalWrite(7+winner,LOW);


  }
}
