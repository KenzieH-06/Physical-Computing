//pin definitions  

int pinGS = 11; 

int pinYellowL = 10; 

int pinYellowR = 8; 

int pinSG = 9; 

void setup() 

{ 

  //pin outputs 

  pinMode(pinGS, OUTPUT); 

  pinMode(pinSG, OUTPUT); 

  pinMode(pinYellowL, OUTPUT); 

  pinMode(pinYellowR, OUTPUT); 

} 

 

void loop() 

{ 

 GS();//Right go 

 GetReadyLeft(); 

 Yellow();	 

 SG();//left Go 

 GetReadyLeft(); 

 Yellow(); 

 

} 

 

void GS(){//Right go 

  digitalWrite(pinGS, HIGH); 

  digitalWrite(pinSG, LOW); 

  digitalWrite(pinYellowL, LOW); 

  digitalWrite(pinYellowR, LOW); 

  delay(10000); 

} 

 

void SG(){//Left go 

  digitalWrite(pinGS, LOW); 

  digitalWrite(pinSG, HIGH); 

  digitalWrite(pinYellowL, LOW); 

  digitalWrite(pinYellowR, LOW); 

  delay(10000); 

} 

void GetReadyLeft(){ 

  digitalWrite(pinGS, HIGH); 

  digitalWrite(pinSG, LOW); 

  digitalWrite(pinYellowL, HIGH); 

  digitalWrite(pinYellowR, LOW); 

  delay(10000); 

} 

void GetReadyRight(){ 

  digitalWrite(pinGS, LOW); 

  digitalWrite(pinSG, HIGH); 

  digitalWrite(pinYellowL, LOW); 

  digitalWrite(pinYellowR, HIGH); 

  delay(10000); 

} 

void Yellow(){ 

  digitalWrite(pinGS, LOW); 

  digitalWrite(pinSG, LOW); 

  digitalWrite(pinYellowL, HIGH); 

  digitalWrite(pinYellowR, HIGH); 

  delay(10000); 

} 