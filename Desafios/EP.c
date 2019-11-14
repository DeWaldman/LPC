#include <stdio.h>

int main(void) {
  int a, b, d, tempo;
  int viz=0;
  int L, C, T;
  int X=2, Y=2, Z=51;
  X += 100;
  Y += 100;
  char m[Z][X][Y];
  for(d=0;d<Z;d++){for(a=0;a<X;a++){for(b=0;b<Y;b++){m[d][a][b] = 'A';}}}


  //------------------------------------------------------------------------------------
  scanf("%d %d", &L, &C);
  for(a=1;a<=L;a++){
    scanf("%s", &m[0][a][1]);
    m[0][a][C+1] = 'A';
  }

  scanf("%d", &T);
  for(tempo=0;tempo<T;tempo++){
    for(a=1;a<=L;a++){
      for(b=1;b<=C;b++){
        viz=0;
        if(m[tempo][a-1][b] == '1'){viz++;}
        if(m[tempo][a-1][b+1] == '1'){viz++;}
        if(m[tempo][a-1][b-1] == '1'){viz++;}
        if(m[tempo][a][b+1] == '1'){viz++;}
        if(m[tempo][a][b-1] == '1'){viz++;}
        if(m[tempo][a+1][b] == '1'){viz++;}
        if(m[tempo][a+1][b+1] == '1'){viz++;}
        if(m[tempo][a+1][b-1] == '1'){viz++;}
        
        if(m[tempo][a][b] == '1' && viz<2){
          m[tempo+1][a][b] = '0';
        }
        else if(m[tempo][a][b] == '1' && viz>3){
          m[tempo+1][a][b] = '0';
        }
        else if(m[tempo][a][b] == '0' && viz == 3){
          m[tempo+1][a][b] = '1';
        }
        else if(m[tempo][a][b] == '1' && (viz==2 || viz==3)){
          m[tempo+1][a][b] = m[tempo][a][b];
        }
        else{
          m[tempo+1][a][b] = m[tempo][a][b];
        }
      }
    }
  }
  for(a=1;a<=L;a++){
    for(b=1;b<=C;b++){
      printf("%c", m[T][a][b]);
    }printf("\n");
  }
  
  return 0;}
