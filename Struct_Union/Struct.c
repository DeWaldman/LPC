#include <stdio.h>
#include <stdlib.h>


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

//------------------------------------------------
int main(){
  dma x;
  x.dia = 30;
  x.mes = 12;
  x.ano = 1;
  int n_d = 1;
  printf("%d\n", fim_evento(x, n_d).dia);
  printf("%d\n", fim_evento(x, n_d).mes);
  printf("%d\n", fim_evento(x, n_d).ano);

return 0;}
