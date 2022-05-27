int var;
void setup(){
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop(){
  var = analogRead(A0);
  if(var<1000){
    Serial.println("Detect");
    Serial.println(var);
  }
  else{
    Serial.println("No Detect");
    Serial.println(var);
    delay(500);
    
    }
}
