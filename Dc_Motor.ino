int speedPin= 5;
int dir1= 4;
int dir2 = 3;
int mSpeed = 200;


void setup() {
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  // analogWrite(speedPin,225);
  // delay(25);
  analogWrite(speedPin,mSpeed);
  delay(2000);

  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  // analogWrite(speedPin,225);
  // delay(25);
  analogWrite(speedPin,mSpeed);
  delay(2000);


}
