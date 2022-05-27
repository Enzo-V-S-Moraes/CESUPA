// SENSOR ULTRASONICO
// Importar a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

// Definir Echo e Trigger
#define pino_trigger 13
#define pino_echo 12

// Iniciar os pinos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);

// TCRT5000
int pinoSensorFrente;
int pinoSensorCosta;

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

  // TCRT5000 frente e trás
int pinoSensorFrente;
int pinoSensorCosta;
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
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

  // TCRT5000 frente
  pinoSensorFrente = analogRead(A0);
  if(pinoSensorFrente<1000){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(2000);
    
  }
  
   
    // TCRT5000 costa
  pinoSensorCosta = analogRead(A1);
  if(pinoSensorCosta<1000){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(2000);
  }
  
 
  
  // PONTE H
  // Gira o Motor A e B no sentido horário
  //Motor Direito = IN1 e IN2 
  //Motor Esquerdo = IN3 e IN4
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  
  if(cmMsec <= 50.00){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(2000);
 }
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  );
}
