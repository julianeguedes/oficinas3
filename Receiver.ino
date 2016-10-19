char msg = ' '; //contains the message from arduino sender
const int led = 13; //led at pin 13
void setup() {
Serial.begin(9600);//Remember that the baud must be the same on both arduinos
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}
void loop() {
while(Serial.available()) {
           msg=Serial.read();
           if(msg=='F') {
               digitalWrite(9,HIGH);
           }
           if(msg=='G') {
               digitalWrite(9,LOW);
           }
           if(msg=='T') {
               digitalWrite(10,HIGH);
           }
           if(msg=='U') {
               digitalWrite(10,LOW);
           }
           if(msg=='D') {
               digitalWrite(11,HIGH);
           }
           if(msg=='C') {
               digitalWrite(11,LOW);
           }
           if(msg=='E') {
               digitalWrite(12,HIGH);
           }
           if(msg=='F') {
               digitalWrite(12,LOW);
           }
delay(50);
}
}
