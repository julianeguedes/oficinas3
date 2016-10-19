void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
}
void loop() {
Serial.println("H"); //turn on the LED
digitalWrite(13,HIGH);
delay(500);
Serial.println("L");//turn off the LED
digitalWrite(13,LOW);
delay(500);
}
