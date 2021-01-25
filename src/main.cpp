#include <Arduino.h>
#define segundos(x) x * 1000

void setup()
{
  // put your setup code here, to run once:
  //inicializo el pin13
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); //enciendo el Led
  delay(segundos(1));
  digitalWrite(LED_BUILTIN, LOW); //apago el Led
  delay(segundos(2));
}