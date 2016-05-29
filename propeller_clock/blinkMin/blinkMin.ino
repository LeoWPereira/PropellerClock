/*chamada que acende o ponteiro dos minutos
deve ser chamada com os grupos 1, 2, 3 e 4 com o seguinte comando

blinkMin(g1_a, g2_a, g3_a, g4_a);

*/

void blinkMin (int g1, int g2, int g3, int g4)
{
  //acende os leds
  digitalWrite(g4,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g1,LOW);
  //mantem acesos pelo tempo de piscagem
  delay(pisca);
  //apaga os leds
  digitalWrite(g4,HIGH);
  digitalWrite(g3,HIGH);
  digitalWrite(g2,HIGH);
  digitalWrite(g1,HIGH);
}
