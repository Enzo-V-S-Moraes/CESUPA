#include <Servo.h>
#include <Ultrasonic.h>
////////////////////////////////////////////////
#define trigger 12 //larannja
#define echo 13  //verde
#define IN1 5  ///marrom
#define IN2 6  //verde
#define IN3 10  //branco
#define IN4 9 //amrelo
 Servo myservo1;
 Servo myservo2;
 int sensorIR = 8;
 int estado;
 int val;
/*------*/int cm;/*------*/

Ultrasonic ultrasonic(12, 11);

void setup()
  {

    Serial.begin(9600);
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(sensorIR, INPUT);
    myservo1.attach(4);
    myservo2.attach(2);

  }

   void loop()
    {
    estado = digitalRead(sensorIR);
       cm = ultrasonic.read();
      Serial.print(cm);
    // IR PRA FRENTE
    analogWrite(IN1, 255);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    analogWrite(IN4, 255);
    delay(500);
   

    if(cm <= 15){
     myservo2.write(70);
    myservo1.write(70);
   digitalWrite(4, HIGH);
     delay(2000);
        digitalWrite(4, LOW);
       
    if (estado == HIGH){
      myservo1.write(0);
      myservo2.write(0);

      // IR PRA tras
    digitalWrite(IN1, LOW);
    analogWrite(IN2, 255);
    analogWrite(IN3, 255);
    digitalWrite(IN4, LOW);
    delay(1000);

   // ir para direita
 
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    analogWrite(IN4, 255);
    delay(600);

     
    }
   }
  /*if(cm <= 75){
    //ir para frente
    //analogWrite(IN1, 255);
    //digitalWrite(IN2, LOW);
    //digitalWrite(IN3, LOW);
    //analogWrite(IN4, 255);
    //delay(500);
    //}*/
    }
