
byte pump1 = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
//  while(!Serial);
    pinMode(pump1, OUTPUT); 
  

}

void loop() {
  digitalWrite(pump1,LOW); //activated

}
