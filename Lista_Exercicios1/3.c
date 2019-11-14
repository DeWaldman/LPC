#include <stdio.h>

int main(){

int i = 1, j = 0;
int n; printf("Entre com N: "); scanf("%d", &n);

while(1){
  if(j==n){break;}
  else if(i%2!=0){printf("%d ",i);j++;}
  i++;
}


printf("\n");
return 0;
}
