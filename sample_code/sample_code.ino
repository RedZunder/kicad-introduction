
void setup() {
  // put your setup code here, to run once:
  pinMode(PB4,OUTPUT);
  pinMode(PB3,INPUT);

  uint8_t c=0;

  //For info, blink the LED 5 times
  while(c<5)  
  {
    digitalWrite(PB4, HIGH);
    delay(500);
    digitalWrite(PB4, LOW);
    delay(500);
    c++;
  }

}


int valueRead=0;
int pwmValue=0;
void loop() {
  // put your main code here, to run repeatedly:
  valueRead=analogRead(PB3);
  pwmValue=valueRead*255/600;
  analogWrite(PB4, pwmValue);
  delay(100);
}
