#include <stdio.h>

int main(){

int n , x1,x2,x3;
x1 = 1; x2 = 2; x3 = 3;

printf("Entre com N: "); scanf("%d",&n);

int resu=0;
while(resu < n){
  resu = x1 * x2 * x3;
  x1++;x2++;x3++;
}

if(resu == n ){printf("Numero Triangular!");}
else{printf("Numero Nao Triangular!");}

printf("\n");
return 0;
}
