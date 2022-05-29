// SENSOR ULTRASONICO
// Importar a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>
// Definir Echo e Trigger
#define pino_trigger 13
#define pino_echo 12
// Iniciar os pinos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);

// TCRT5000
int pinoSensorFrente = A0;
//int pinoSensorCosta = A1;
int sensorValueFrente;
//int sensorValueCosta;
// PONTE H
// Definindo pinos
int IN1 = 11;
int IN2 = 10;
int IN3 = 9;
int IN4 = 8;

void setup() {
  // SENSOR ULTRASONICO
  // Sensor Ultrassonico

  // TCRT5000 frente e trás
  //pinMode(A0, INPUT);
  //pinMode(A1, INPUT);
  
  Serial.begin(9600);
//Motores A e B
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  

  sensorValueFrente = analogRead(A0);
  //sensorValueCosta = analogRead(A1);
  Serial.println(sensorValueFrente);
//  Serial.println(sensorValueCosta);
//testar
  delay(200);



  // PONTE H
  // Gira o Motor A e B no sentido horário
  //Motor Direito = IN1 e IN2 
  //Motor Esquerdo = IN3 e IN4
  

   if(sensorValueFrente<900){
    Serial.println("Entrou");
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(200);
  }
  else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
}
