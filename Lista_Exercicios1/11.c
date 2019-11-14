#include <stdio.h>

int main(){

int n, i, soma=0;
printf("Entre com N: "); scanf("%d", &n);

for(i=1;i!=n;i++){
  if(n%i==0){soma += i;}
}
if(soma==n){printf("%d Perfeito!", n);}
else{printf("%d Nao Perfeito!", n);}

printf("\n");
return 0;
}
