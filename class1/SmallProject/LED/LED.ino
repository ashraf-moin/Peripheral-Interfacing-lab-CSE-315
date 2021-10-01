String a;
int number;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()) {
    Serial.println("Set a timer from 1 to 10 minute and 0 for Reset");
    a = Serial.readString();
    number = a.toInt();
    Serial.println(number);
//    it is for reset
    if (number == 0) {
      for (int k = 0; k < 11; k++) {
        digitalWrite(k + 2, LOW);
      }
    }
    else {
      for (int i = 0; i < number; i++) {
        for (int j = 0; j < 10; j++) {
          digitalWrite(13, HIGH);
          delay(500);
          digitalWrite(13, LOW);
          delay(500);
        }
        digitalWrite(i + 2, HIGH);
      }
      digitalWrite(12, HIGH);
    }
    Serial.println("The End");
  }
}
