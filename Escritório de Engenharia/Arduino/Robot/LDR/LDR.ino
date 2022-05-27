
int pinoSensor = 7;
int sensorValue;
void setup(){
  pinMode(pinoSensor, INPUT);
  Serial.begin(9600);
  }
void loop(){
  sensorValue = digitalRead(7);
  Serial.println(sensorValue);
  delay(1);
 }
