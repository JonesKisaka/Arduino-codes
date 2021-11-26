int RLed1 = 13;
int RLed2 = 12;
int GLed1 = 11;
int GLed2 = 10;
int YLed1 = 9;
int YLed2 = 8;

void setup() {
  pinMode(RLed1, OUTPUT);

}

void loop() {
 
  digitalWrite(RLed1, HIGH);
  delay(500);

  digitalWrite(RLed2, HIGH);
  delay(500);

  digitalWrite(GLed1, HIGH);
  delay(500);

  digitalWrite(GLed2, HIGH);
  delay(500);

  digitalWrite(YLed1, HIGH);
  delay(500);

  digitalWrite(YLed2, HIGH);
  delay(500);

  digitalWrite(RLed1, LOW);
  delay(500);

  digitalWrite(RLed2, LOW);
  delay(500);

  digitalWrite(GLed1, LOW);
  delay(500);

  digitalWrite(GLed2, LOW);
  delay(500);

  digitalWrite(YLed1, LOW);
  delay(500);

  digitalWrite(YLed2, LOW);
  delay(500);
}
