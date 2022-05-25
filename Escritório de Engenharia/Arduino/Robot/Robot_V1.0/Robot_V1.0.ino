int light_threshold = 650;
int dark_treshold = 300;
int lineNumber;
int lineSensorPin = 4;

int IN1 = 11;
int IN2 = 10;
int IN3 = 9;
int IN4 = 8;
int buzzer = 4;

int wait_in_miliseconds = 10;

void foward(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  delay(wait_in_miliseconds);

  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
}

void backward(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  delay(wait_in_miliseconds);

  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
}

void turnright(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);

  delay(wait_in_miliseconds);

  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
}

void turnleft(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  delay(wait_in_miliseconds);

  analogWrite(IN1, 0);
  analogWrite(IN2, 0);  
}

int readLineSensor(){
  return analogRead(lineSensorPin);
}

void setup(){
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  lineNumber = readLineSensor();

  while(lineNumber > light_threshold){
    Serial.println(lineNumber);
    lineNumber = readLineSensor();
  }
  Serial.println(lineNumber);
  if(lineNumber < light_threshold){
    turnleft();
  }
  else{
    Serial.println(lineNumber);
    backward();
    backward();
    turnleft();
  }
  Serial.println(lineNumber);
}
