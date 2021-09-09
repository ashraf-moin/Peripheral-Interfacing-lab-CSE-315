byte A,B,C;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,INPUT);
pinMode(10,INPUT);
pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  A=digitalRead(11);
  B=digitalRead(10);
  C=digitalRead(9);
  digitalWrite(13,A^B^C);
  digitalWrite(12,((A&B)|(B&C)|(A&C)));

}
