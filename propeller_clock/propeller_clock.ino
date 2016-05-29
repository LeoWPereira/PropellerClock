/*
agora vai...

programa que torna um trilho de leds girando em um relogio usando o
fenomeno da POV.

as saidas pares sao verdes, as impares sao azuis e a borda eh
vermelha

o ponteiro das horas eh verde e o dos minutos eh azul

*/


int hora = 13;
int minuto = 50;

int rpm = 2400; //valor medido de rotacoes por minutos
int arco_min = 416; //valor do arco de 1min (6 graus) em micros
int accel = 0;/*valor para o cooler acelerar e posicionar a placa
na posicao norte (apontada para cima), em s*/
int pisca = 0;//valor que um led fica aceso ao piscar, em micros


//da nome para as saidas de cada grupo
int g4_v = 12;
int g4_a = 11;
int g3_v = 10;
int g3_a = 9;
int g2_v = 8;
int g2_a = 7;
int g1_v = 6;
int g1_a = 5;
int borda = 4;


void setup()
{
  
  //seta os pinos como saidas
  pinMode(g4_v,OUTPUT);
  pinMode(g4_a,OUTPUT);
  pinMode(g3_v,OUTPUT);
  pinMode(g3_a,OUTPUT);
  pinMode(g2_v,OUTPUT);
  pinMode(g2_a,OUTPUT);
  pinMode(g1_v,OUTPUT);
  pinMode(g1_a,OUTPUT);
  pinMode(borda,OUTPUT);
  
  //desliga os leds
  digitalWrite(g4_v,HIGH);
  digitalWrite(g4_a,HIGH);
  digitalWrite(g3_v,HIGH);
  digitalWrite(g3_a,HIGH);
  digitalWrite(g2_v,HIGH);
  digitalWrite(g2_a,HIGH);
  digitalWrite(g1_v,HIGH);
  digitalWrite(g1_a,HIGH);
  digitalWrite(borda,HIGH);
}

void loop ()
{
  
  //tempo entre ligar o arduino e colocar o cooler na tomada, em s
  delay(5000);
  
  //tempo para o cooler acelerar ate a posicao de origem
  delay(accel);
  //loading();
  clock();
  
}
