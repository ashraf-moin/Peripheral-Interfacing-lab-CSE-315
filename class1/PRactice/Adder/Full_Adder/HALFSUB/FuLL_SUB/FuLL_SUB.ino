byte a,b,c;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  
  pinMode(10,INPUT);
  pinMode(9,INPUT);
  pinMode(8, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(10);
  b = digitalRead(9);
  b = digitalRead(8);

 
  digitalWrite(13, a^b^c);
  digitalWrite(12, ((b&c)| (!a) | (b|c)));
}
