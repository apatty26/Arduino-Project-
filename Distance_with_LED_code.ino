 #include "SR04.h";
int TRIG_PIN = 12; 
int ECHO_PIN = 11; 
int LED1_PIN = 13; 
int LED2_PIN = 8; 

SR04 ultrasonic_sensor1 = SR04(ECHO_PIN, TRIG_PIN); 
long distance; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
delay(1000); 
pinMode(LED1_PIN, OUTPUT); 
pinMode(LED2_PIN, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
distance = ultrasonic_sensor1.Distance(); 
Serial.print(distance); 
Serial.println("cm");
delay(1000); 

 if(distance > 100) {
 digitalWrite(LED1_PIN, HIGH);
 } 
 else {
  digitalWrite(LED1_PIN, LOW);
 }
 if(distance < 50){
  digitalWrite(LED2_PIN, HIGH); 
 }
 else {
  digitalWrite(LED2_PIN, LOW); 
 }

}
