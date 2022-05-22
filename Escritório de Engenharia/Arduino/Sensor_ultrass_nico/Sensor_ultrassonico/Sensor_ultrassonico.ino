// SENSOR ULTRASONICO
// Importar a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

// Definir Echo e Trigger
#define pino_trigger 13
#define pino_echo 12

// Iniciar os pinos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);

// PONTE H
// Definindo pinos
int IN1 = 11;
int IN2 = 10;
int IN3 = 9;
int IN4 = 8;


void setup() {
  // SENSOR ULTRASONICO
  // Sensor Ultrassonico
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");

  // PONTE H
  // Definindo os pinos como saida
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Sensor Ultrassonico
  // Lendo informações do sensor, em cm e pol
  float cmMsec, inMsec;
  cmMsec = ultrasonic.distanceRead(CM);
  inMsec = ultrasonic.distanceRead(INC);

  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.print(cmMsec);
  Serial.print(" – Distancia em polegadas: ");
  Serial.println(inMsec);
  delay(200);
  
  // PONTE H
  // Gira o Motor A e B no sentido horário
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  if(cmMsec <= 2000){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);*
  }
  
  /*delay(2000);
  
  // Parar o Motor A e B
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);*/
}
