int stp = 2;
int dir = 3;
int top = 5;
int up = 10;
int dn = 11;
int slo = 12;
int en = 13;

void setup() {
  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(up, INPUT);
  pinMode(dn, INPUT);
  pinMode(slo, INPUT);
  pinMode(top, INPUT);
}

void loop() {
  if (digitalRead(up) == HIGH && digitalRead(top) == LOW) {
    digitalWrite(en, LOW);
    digitalWrite(dir, HIGH);
    digitalWrite(stp, HIGH);
    delay(1);
    digitalWrite(stp, LOW);
  } else if (digitalRead(dn) == HIGH) {
    digitalWrite(en, LOW);
    digitalWrite(dir, LOW);
    digitalWrite(stp, HIGH);
    delay(1);
    digitalWrite(stp, LOW);
  } else {
    digitalWrite(en, HIGH);
  }
  if (digitalRead(slo) == HIGH) {
    delay(10);
  }
}
