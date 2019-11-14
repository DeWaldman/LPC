#include <stdio.h>

int main(){

int n;
printf("Entre com N: "); scanf("%d", &n);

int cont, tag=1;

for(cont=2; cont!=n; cont++){
  if(n%cont==0){printf("Numero Nao Primo!"); tag=0; break;}
}
if(tag){printf("Numero Primo!");}

printf("\n");
return 0;
}
