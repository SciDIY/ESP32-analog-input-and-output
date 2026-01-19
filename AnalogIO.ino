int Led = 0;
int Potentiometer = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(26,INPUT);
  pinMode(25,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Potentiometer = analogRead(26);
  Potentiometer = Potentiometer / 16;
  Potentiometer = round(Potentiometer);
  Serial.println(Potentiometer);
  analogWrite(25,Potentiometer);

  delay(200);
}





