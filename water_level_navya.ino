
int value;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(A0);
if(value<=480){
  Serial.println("Water level:0mm-Empty");
}
else if(value>480 && value<=530)
{
  Serial.println("Water level:0mm-5mm");
    
}
else if(value>530 && value<=615){
 Serial.println("Water level:5mm-10mm");
}
else if(value>615 && value<=660){
 Serial.println("Water level:10mm-15mm");
}
else if(value>660 && value<=680){
 Serial.println("Water level:15mm-20mm");
}
else if(value>680 && value<=690){
 Serial.println("Water level:20mm-25mm");
}
else if(value>690 && value<=700){
 Serial.println("Water level:25mm-30mm");
}
else if(value>700 && value<=705){
 Serial.println("Water level:30mm-35mm");
}
else if(value>705){
 Serial.println("Water level:35mm to 40mm");
}
delay(1000);
}
