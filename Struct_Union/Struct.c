#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define day(a,b) (a+b)%30 == 0 ? 1: (a+b)%30 

//-------------------------------------------
typedef struct{
  int dia;
  int mes;
  int ano;
}dma;

typedef struct{
  int horas;
  int minutos;
}hm;


//--------------------------------------------
dma fim_evento (dma datainicio, int n_dias){
  dma datafim;
  if(n_dias == 0){
    datafim.dia = datainicio.dia;
    datafim.mes = datainicio.mes;
    datafim.ano = datainicio.ano;
    return datafim;
  }
  else{
    datafim.dia = day(datainicio.dia, n_dias);
    datafim.mes = datainicio.mes;
    datafim.ano = datainicio.ano;
    if(datafim.dia == 1){//virou o mes
      datafim.mes++;
      if( datafim.mes == 13){//virou o ano
        datafim.mes=1;
        datafim.ano++;
      }
    }
    return datafim;
  }
}


int howlong(dma data1, dma data2){
  int dias1 = 0, dias2 = 0;
  dias1 += data1.dia;
  dias1 += data1.mes * 30;
  dias1 += data1.ano * 365;

  dias2 += data2.dia;
  dias2 += data2.mes * 30;
  dias2 += data2.ano * 365;
  
  return dias2 - dias1;
}


hm time(int temp_min){
  hm relogio;
  relogio.horas = (int)temp_min/60;
  relogio.minutos = round((temp_min/60.0 - relogio.horas)*60);
  return relogio;
}


//------------------------------------------------
int main(){
  dma x, y;
  int n_d = 1;
  y.dia = 1;
  y.mes = 1;
  y.ano = 1;

  x.dia = 1;
  x.mes = 1;
  x.ano = 1;

  printf("fim_evento() -> %d ", fim_evento(x, n_d).dia);
  printf("%d ", fim_evento(x, n_d).mes);
  printf("%d\n", fim_evento(x, n_d).ano);

  printf("howlong() -> %d\n", howlong(x, y));
  
  printf("time() -> %d ", time(131).horas);
  printf("%d\n", time(131).minutos);

return 0;}
