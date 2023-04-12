const int pinoLED = 12;
const int pinoLDR = 8;

void setup() {
 Serial.begin(9600);
  pinMode(pinoLED, OUTPUT);
  pinMode(pinoLDR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pinoLDR)==LOW){
    digitalWrite(pinoLED,HIGH);
  }else{
    digitalWrite(pinoLED,LOW);
  }
  Serial.print(0);
  Serial.print("\t");
  Serial.println(digitalRead(pinoLED));
}
