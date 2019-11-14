#include <stdio.h>

int main(){

int x, n, cont, var;

printf("X N\n");
scanf("%d%d",&x,&n);

var = 1;
cont = 0;
while(cont!=n){
  var = var * x;
  cont++;
}
printf("%d\n",var);

return 0;
}
