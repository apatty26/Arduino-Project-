int ledPin = 13; 
int sensorPin =0: 
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue; 
sensorValue = analogRead(sensorPin);

digitalWright(ledpin, HIGH); 
delay(sensorValue); 
digitalwrite(ledpin, LOW); 
delay(sensorValue); 

}
