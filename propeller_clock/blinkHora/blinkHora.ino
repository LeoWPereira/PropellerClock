/*chamada que acende o ponteiro da hora
deve ser chamada com os grupos 3 e 4, com o seguinte comando

blinkHora(g3_v, g4_v);

*/

void blinkHora (int g3, int g4)
{
  //acende os leds
  digitalWrite(g4,LOW);
  digitalWrite(g3,LOW);
  //mantem aceso pelo tempo de piscagem
  delay(pisca);
  //apaga os leds
  digitalWrite(g4,HIGH);
  digitalWrite(g3,HIGH);
}
