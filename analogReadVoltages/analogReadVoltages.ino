int pot = A0;
float readvalue;
void setup() {
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  readvalue = analogRead(pot);
  Serial.print(readvalue*5/1023);
  Serial.println(" V");
  delay(250);

}
