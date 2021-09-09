int num = 0;
int num1 = 0;
boolean inC;
boolean inD;
boolean XNOR;
boolean XOR;
boolean NOR;
boolean OR;
boolean NAND;
boolean AND;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // put your main code here, to run repeatedly:
  Serial.println("Enter your NUMBER.");
  while (Serial.available() == 0)
    num = Serial.read();
  Serial.println("Enter your NUMBER 2.");
  while (Serial.available() == 0)
    num1 = Serial.read();
  XNOR = !(inC ^ inC);
  XOR = inC ^ inD;
  NOR = !(inC | inD);
  OR = inC | inD;
  NAND = !(inC & inD);
  AND = inC & inD;
  XNOR = !(inC ^ inD);
  XOR = inC ^ inD;
  NOR = !(inC | inD);
  OR = inC | inD;
  NAND = !(inC & inD);
  AND = inD & inD;




  Serial.print("YOUR ans:" + num + num1);
  Serial.print(AND);
  Serial.print(" NAND:");
  Serial.print(NAND);
  Serial.print(" OR:");
  Serial.print(OR);
  Serial.print(" NOR:");
  Serial.print(NOR);
  Serial.print(" XOR:");
  Serial.print(XOR);
  Serial.print(" XNOR:");
  Serial.println(XNOR);
  delay(1000);


}
