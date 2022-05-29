
#include <Ultrasonic.h>
#define pino_trigger 13
#define pino_echo 12 
Ultrasonic ultrasonic(pino_trigger, pino_echo);
int pinoSensorCosta = A1;
int pinoSensorFrente = A0;
int sensorValue;
int sensorValue2;
void setup(){
  pinMode(pinoSensorFrente, INPUT);
  pinMode(pinoSensorCosta, INPUT);
  Serial.begin(9600);
  }
void loop(){
  
  float cmMsec, inMsec;
  cmMsec = ultrasonic.distanceRead(CM);
  inMsec = ultrasonic.distanceRead(INC);
  sensorValue = analogRead(A0);
  sensorValue2 = analogRead(A1);
  Serial.print(cmMsec);
  Serial.println("----");
  Serial.println(sensorValue);
  Serial.println(sensorValue2);
  
  delay(2000);
 }
