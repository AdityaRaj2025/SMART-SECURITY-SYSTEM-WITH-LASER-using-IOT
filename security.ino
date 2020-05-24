//Laser Light Security System

void setup() {
pinMode(5,OUTPUT); //Buzzer Pin
pinMode(4,INPUT); // Light Sensor
delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
	int i=0;
	if(digitalRead(4)==HIGH)
	{
	  a:
	  digitalWrite(5,HIGH);
	  delay(150);
	  digitalWrite(5,LOW);
	  delay(100);
	  i++;
	  if(i<50){
	  goto a;
	}
}

