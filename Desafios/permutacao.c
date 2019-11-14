#include <stdio.h>
int fun(int num, int dig);

int fun(int num, int dig){
  int j, i, cont = 0;
  int dnum;
  while(num>0){
  	dnum=num%10;
  	num = num/10;
    if(dig == dnum){cont++;}
  }

return cont;}

int main(){

int i, vetor[10], betor[10]; for(i=0;i<10;i++){vetor[i]=0;betor[i]=0;}
int a, b, a1, b1;
int flag = 1;

scanf("%d %d", &a, &b);

a1 = a; b1 = b;

while(a1>0){ // AAAAAAAAAAAAAAAAAAAAAA
  vetor[a1%10] = fun(a, a1%10);
  a1 = a1/10;
}

while(b1>0){ //BBBBBBBBBBBBBBBBBBBBBBBBB
  betor[b1%10] = fun(b, b1%10);
  b1 = b1/10;
}

for(i=1;i<10;i++){
  if(betor[i] != vetor[i]){flag=0;}
}
if(flag){printf("%d e permutacao de %d\n",a,b);}
else{printf("%d nao e permutacao de %d\n",a,b);}


return 0;}
