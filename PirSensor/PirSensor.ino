void setup() {
pinMode(34,INPUT);
Serial.begin(115200);

}

void loop() {
int pir = digitalRead(34);
if(pir == HIGH){
Serial.print("Detect:");
Serial.print("PERSON :");
Serial.println(pir);

}
else{
Serial.print("Detect:");
Serial.print("No new person :");
Serial.println(pir);

}
delay(10);

}
