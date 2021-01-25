#include <Arduino.h>
#define segundos(x) x * 1000 //Convierto los milisegundos a segundos

void setup()
{
  //inicializo el pin13 que en Arduino es un leden la placa
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); //enciendo el Led
  delay(segundos(1)); //Tiempo de espera
  digitalWrite(LED_BUILTIN, LOW); //apago el Led
  delay(segundos(2));
}