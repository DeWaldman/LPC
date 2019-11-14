#include <stdio.h>


int main(){

int a=0,b=1, f;
int n; printf("Entre com N: "); scanf("%d", &n);


for(int i=1;i!=n;i++){
  f = a+b;
  //printf("[F(n) n=%d] = %d", i, f);
  a = b;
  b = f;
  //printf("\n");
}

printf("%d", f);

printf("\n");
return 0;
}
