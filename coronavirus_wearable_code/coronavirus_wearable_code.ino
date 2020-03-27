boolean mode = false;
boolean tilt = false;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  
  mode = digitalRead(2);
  
  tilt = digitalRead(3);

  if(tilt == true) {
    digitalWrite(4, HIGH);
    if (mode == true) {
      digitalWrite(0, HIGH);
      delay(100);
      digitalWrite(0, LOW);
      digitalWrite(4, LOW);
    }
    else if(mode == false) {
      digitalWrite(1, HIGH);
      delay(100);
      digitalWrite(0, LOW);
      digitalWrite(4, LOW);
    }
  }  
}

