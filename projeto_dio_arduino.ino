// C++ code
//
int motor = 6;
int buzzer = 7;
int led = 13;
int temp = 0;
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(3600);
}

void loop()
{
  int temperatura = analogRead(temp);
  Serial.print("valor de temperatura:");
  Serial.println(temperatura);
  if(temperatura>166){
  	digitalWrite(motor, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    if(temperatura>206){
     digitalWrite(buzzer, HIGH);
     digitalWrite(led, HIGH);
  }
  }
  else{
  	digitalWrite(motor, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
}