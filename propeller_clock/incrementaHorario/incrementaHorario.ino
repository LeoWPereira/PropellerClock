/* funcao que incrementa o horario apos um minuto */
 void incrementaHorario()
 {
  //incrementa os minutos
  minuto++;
  
  //se for 60min, tem que zerar os min e incrementar as horas
  if(minuto == 60)
  {
    minuto = 0;
    hora++;
    
    //se a hora for igual a 12, zera
    if(hora == 12)
    {
      hora = 0;
    }
  }
   
 }
