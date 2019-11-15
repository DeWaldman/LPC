#include <stdio.h>
#include <ctype.h>

int main(void) {
  int a, b, c, d;
  int X=50, Y=20, flag;
  char m[X][Y], xar, letra;
  for(a=0;a<X;a++){for(b=0;b<Y;b++){m[a][b]=0;}}
  //------------------------------------------------------------------------
  
  b=a=0;
  while(1){
    xar=tolower(getchar());
    if(xar == '*'){break;}
    if(xar == 10){
      letra = m[0][0];
      flag = 1;
      for(c=0;c<=a;c++){
        //printf("m[%d][0] => %c\nletra => %c\n", c, m[c][0], letra);
        if(letra != m[c][0]){
          //Flowers Flourish from France
          flag=0;
          //printf("altered > flag -> %d\n", flag);
        }
      }
      if(flag){
        printf("Y\n");
      }
      else{
        printf("N\n");
      }

      for(a=0;a<X;a++){for(b=0;b<Y;b++){m[a][b]=0;}}
      b=a=0;
    }
    else{
      if(xar == ' '){a++;b=0;continue;}
      m[a][b]=xar;
      b++;
    }
  } 

return 0;}
