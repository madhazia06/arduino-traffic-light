//pin numbers for LEDs
int redLED = 13;
int yellowLED = 12;
int greenLED = 11;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  //redLED ON for 6 seconds
  digitalWrite(redLED, HIGH);
  delay(6000);
  digitalWrite(redLED, LOW);

  //yellowLED ON for 3 seconds
  digitalWrite(yellowLED, HIGH);
  delay(3000);

  //yellowLED blinks for 3 seconds
  for (int x = 0; x < 3; x++) {
    digitalWrite(yellowLED, LOW);
    delay(500);
    digitalWrite(yellowLED, HIGH);
    delay(500);
  }
  //yellowLED OFF
  digitalWrite(yellowLED, LOW);

  //greenLED ON for 6 seconds
  digitalWrite(greenLED, HIGH);
  delay(6000);
  digitalWrite(greenLED, LOW);

}
