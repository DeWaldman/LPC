#include <stdio.h>

int troca(float *x, float *y);

//----------------------------------------------------
int troca(float *x, float *y){
  float t;
  t = *y;
  *y = *x;
  *x = t;
return 0;}
//----------------------------------------------------

int main(){
  float a,b,c;
  scanf("%f %f %f", &a, &b, &c);
  if (a>b){
    troca(&a, &b);
  }
  if(a>c){
    troca(&a,&c);
  }
  if(b>c){
    troca(&b, &c);
  }
  
  printf("%.2f -- %.2f -- %.2f", a,b,c);
return 0;}