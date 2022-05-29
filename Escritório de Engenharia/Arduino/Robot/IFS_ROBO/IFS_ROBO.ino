void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
   // TCRT5000 frente
  pinoSensorFrente = analogRead(A0);
  if(pinoSensorFrente<850){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

   delay(800);
   digitalWrite(IN3, HIGH);
   digitalWrite(IN4, LOW);
   delay(2000);
    
  }
    // TCRT5000 costa
  pinoSensorCosta = analogRead(A1);
  if(pinoSensorCosta<850){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

   delay(800);
   digitalWrite(IN3, LOW);
   digitalWrite(IN4, HIGH);
   delay(2000);
  }

  
  if(cmMsec <= 30.00){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

   delay(800);
   digitalWrite(IN3, HIGH);
   digitalWrite(IN4, LOW);
   delay(2000);
 }
}
