#include <Arduino.h>
#define segundos(x) x * 1000 //Convierto los milisegundos a segundos

void setup()
{
  //inicializo el pin13 que esta en la placa
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); //enciendo el Led
  delay(segundos(1));
  digitalWrite(LED_BUILTIN, LOW); //apago el Led
  delay(segundos(2));
}