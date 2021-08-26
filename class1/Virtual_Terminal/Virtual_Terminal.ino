
int num =79;
char str[]="Ashraf";
char char1 = 'A';
float num1 = 7.9;
double num2 =182010.79;


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    // put your main code here, to run repeatedly:
  Serial.print(num);
  Serial.println();
  Serial.print(str);
  Serial.println();
  Serial.print(char1);
  Serial.println();
  Serial.print(num1);
  Serial.println();
  Serial.print(num2);
  Serial.println();
  Serial.print("change num to oct,hex,BIN");
  Serial.println();
  Serial.print(num, OCT);
  Serial.println();
  Serial.print(num, HEX);
  Serial.println();
  Serial.print(num, BIN);
  Serial.println();

  Serial.print("DEC");
  Serial.print("    ");

  Serial.print("BIN");
  Serial.print("     ");
  Serial.println();

  for(int i=0; i<10; i++){
    Serial.print(i,DEC);
    Serial.print("   ");

    Serial.print(i,BIN);
    Serial.print("   ");
    Serial.println();
    delay(5000);
  }
   
}







  
