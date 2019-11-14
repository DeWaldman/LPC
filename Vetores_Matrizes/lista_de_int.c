#include <stdio.h>

int main(void) {
int c, a[10]={0};

int k=0;
while((c=getchar())!=10){
  if(c>=48 && c<=57){
    a[k] = c-48; 
    k++;
  }
}
for(k=0;k<10;k++){
  if(a[k] <= 0){continue;}
  printf("%d ",a[k]);
}
return 0;}
