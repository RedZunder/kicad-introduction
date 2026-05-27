
#define PB4 4


void setup() {
  // put your setup code here, to run once:
  pinMode(PB4,OUTPUT);
  if(!1)//mpu.begin())
  {
    while(1)
    {
      digitalWrite(PB4, HIGH);
      delay(300);
      digitalWrite(PB4, LOW);
      delay(300);
    }
  }

}


int potentiometerValue=0;

void loop() {
  // put your main code here, to run repeatedly:
  analogRead(PB1)



}
