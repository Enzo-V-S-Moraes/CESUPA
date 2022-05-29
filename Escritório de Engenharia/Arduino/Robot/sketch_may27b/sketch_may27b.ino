// TCRT5000
int pinoSensorFrente = A0;
int pinoSensorCosta = A1;
int sensorValueFrente;
int sensorValueCosta;
// PONTE H
// Definindo pinos
int IN1 = 11;
int IN2 = 10;
int IN3 = 9;
int IN4 = 8;

// SENSOR ULTRASONICO
// Importar a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>
// Definir Echo e Trigger
#define pino_trigger 13
#define pino_echo 12
// Iniciar os pinos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);


void setup() {
  // SENSOR ULTRASONICO
  // Sensor Ultrassonico

  // TCRT5000 frente e trás
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  sensorValueFrente = analogRead(A0);
  sensorValueCosta = analogRead(A1);
  Serial.begin(9600);

  //Motores A e B
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  Serial.println(sensorValueFrente);
  Serial.println(sensorValueCosta);
  delay(200);
}
