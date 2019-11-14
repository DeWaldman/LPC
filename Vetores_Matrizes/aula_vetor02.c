#include <stdio.h>

int main(){
  int lancamento[37],i, n, lanca;
  for(i=0;i<37;i++){lancamento[i]=0;}
  printf("Entre com N: ");scanf("%d", &n);
  for(i=0;i<n;i++){
    printf("Entre com o valor: ");scanf("%d", &lanca);
    ++lancamento[lanca];
  }
  for(i=0;i<37;i++){
    if(lancamento[i]==0) continue;
    printf("Houve %d lancamentos do numero %d\n",lancamento[i], i);
   }
  return 0;} 