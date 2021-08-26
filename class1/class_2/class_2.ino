
int ledPin = 10;
void setup() {

pinMode(ledPin,OUTPUT);
}

void loop() {



  for (int fadeValue = 0 ; fadeValue <= 155; fadeValue += 5) {
    analogWrite(ledPin, fadeValue);
    delay(50);
  }
  for (int fadeValue = 155 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin, fadeValue);
    delay(100);
  }
}
