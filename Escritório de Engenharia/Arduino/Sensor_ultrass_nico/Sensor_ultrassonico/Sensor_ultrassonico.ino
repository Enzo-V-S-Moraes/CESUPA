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
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
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
}
