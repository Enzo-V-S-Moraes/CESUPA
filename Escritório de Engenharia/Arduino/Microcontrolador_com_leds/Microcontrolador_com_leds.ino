#define ledGreen 8
#define ledRed 9
#define ledYellow 10
#define ledBlack 11
#define ledWhite 12

void setup() {
  // put your setup code here, to run once:
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlack, HIGH);
  digitalWrite(ledWhite, HIGH);
  delay(100);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlack, LOW);
  digitalWrite(ledWhite, LOW);
  delay(100);
}
