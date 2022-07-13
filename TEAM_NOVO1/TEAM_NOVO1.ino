byte LIGHT=13;
boolean ON=1;
boolean OFF=0;
void setup() {
  pinMode(LIGHT,OUTPUT);//
  Serial.begin(9600);//initialize serial 
Serial.println("loading.........%");
}

void loop() {
  digitalWrite(LIGHT,ON);
  Serial.println("light is on");
  delay(1000);//1 second delay
  digitalWrite(LIGHT,OFF);
  Serial.println("light is off");
  delay(1000);//1 seCOND delay
  
}
