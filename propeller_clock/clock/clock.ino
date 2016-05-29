/*funcao que faz a magia acontecer... faz com que os leds mostrem
um relogio usando as funcoes blinkHora e blinkMin

eh dividida em tres partes.. se o ponteiro das horas esta na
frente do dos minutos, se o dos minutos esta na frente ou se 
estao alinhados. isso depende de saber qual o angulo entre os
ponteiro e a origem (o eixo vertical, apontando diretamente pra
cima).
*/

void clock ()
{
 //calcula o angulo do ponteiro em relacao a origem
  int ang_min = minuto*6;
  //calcula o angulo do ponteiro das horas
  int ang_hora = (hora*30) + (minuto/2);
  
  //se o ponteiro das horas estiver antes dos minutos
  if (ang_hora < ang_min)
  {
     //diferenca de tempo entre os ponteiros  
     int atraso_entre = ((ang_min-ang_hora)*arco_min);
     /*tempo entre o ultimo ponteiro de uma volta e o primeiro da
     proxima*/
     int atraso_apos = ((360-ang_min+ang_hora)*arco_min);
     //delay entre a origem e o primeiro ponteiro
     int atraso_antes = hora*arco_min;
     
     //aguarda o tempo entre a origem e o primeiro ponteiro
     delayMicroseconds(atraso_antes);
 
     //loop que pisca os ponteiro sequencialmente 2400 vezes
     //variavel contadora
     int n = 0;
     
     for(n=0; n<rpm; n++)
     {
       blinkHora(g3_v, g4_v);
       delayMicroseconds(atraso_entre);
       blinkMin(g1_a, g2_a, g3_a, g4_a);
       delayMicroseconds(atraso_apos);
     }     
     //apos um minuto (2400 voltas) chama a funcao novamente
     clock();    
  }
  
  //se o ponteiro dos minutos esta antes das horas
  else if (ang_min<ang_hora)
  {
     //diferenca de tempo entre os ponteiros  
     int atraso_entre = ((ang_hora-ang_min)*arco_min);
     /*tempo entre o ultimo ponteiro de uma volta e o primeiro da
     proxima*/
     int atraso_apos = ((360-ang_hora+ang_min)*arco_min);
     //delay entre a origem e o primeiro ponteiro
     int atraso_antes = minuto*arco_min;
     
     //aguarda o tempo entre a origem e o primeiro ponteiro
     delayMicroseconds(atraso_antes);
 
     //loop que pisca os ponteiro sequencialmente 2400 vezes
     //variavel contadora
     int n = 0;
     
     for(n=0; n<2400; n++)
     {
       blinkMin(g1_a, g2_a, g3_a, g4_a);
       delayMicroseconds(atraso_entre);
       blinkHora(g3_v, g4_v);
       delayMicroseconds(atraso_apos);       
     }
     //apos 1min roda a funcao mais uma vez
     clock();        
  }  
  
  else
  {
    int atraso_antes = ang_min*arco_min;
    int atraso_apos = 360*arco_min;
   
    //loop
    int n = 0;
    for(n=0; n<2400; n++)
    {
      blinkHora(g3_v, g4_v);
      blinkMin(g1_a, g2_a, g3_a, g4_a);
      delayMicroseconds(atraso_apos);
    }  
    
    clock();
  }
 
}
