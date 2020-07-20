#include <M5StickC.h>

int sensorValue = 0;

float d=0;

void setup(){
  M5.begin();
  Serial.begin(9600);
}

int flag = 0;
unsigned long   buff
void loop(){
  // int sensorValue = analogRead(33);
  // d= 0.9*d + 0.1 * (float)sensorValue;
  // Serial.print("sensor=");
  unsigned long   base = micros();

  if (base-buff>=1000000)
  {
    /* code */
  Serial.println(micros());
  buff = micros();
  }
  

  // flag = 1;
  // delay(1000);
}
