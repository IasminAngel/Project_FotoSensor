// C++ code
// Iasmin Angel

int led = 3;
int sensor = A0;
int valorSensor = 0;


void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin (9600);
}

void loop()
{
  valorSensor = analogRead(sensor);
  Serial.println(valorSensor);
  
  if(valorSensor < 100){
  	digitalWrite (led,HIGH);
  } else {
  	digitalWrite (led,LOW);
  }
  
  delay(100); 
}