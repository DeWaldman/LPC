#include <stdio.h>

int main(void) {
  int a, b, c;
  int X=2, Y=3;
  char m[X][Y],xar;for(a=0;a<X;a++){for(b=0;b<Y;b++){m[a][b]=0;}}
  //---------------------------------------------------------------------------------------------
  
  b=a=0;
  while((xar=getchar()) != 10){
    if(xar == ' '){a++;b=0;continue;}
    m[a][b]=xar;
    b++;
  }

  for(a=0;a<X;a++){
    for(b=0;b<Y;b++){
      printf("-%d-", m[a][b]);
    }printf("\n");
  }

return 0;}
