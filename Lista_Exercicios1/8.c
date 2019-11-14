#include <stdio.h>

int main(){


int st, c, n, i, j;

printf("entre com os valores: N: I: J:");
scanf("%d%d%d",&n,&i,&j);


c=0;
st=0;
while(st<n){
  if(c==1){}
  else if(c%i==0 || c%j==0){printf("%d", c); st++;}
  c++;
}
printf("\n");
return 0;
}
