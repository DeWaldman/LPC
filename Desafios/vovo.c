#include <stdio.h>
#include <string.h>

int main(){

  int a,b,c;
  int Tes, Lin, Col, Plv;
  int X, Y, Z;
  X = 50;
  Y = 50;
  Z = 100;
  char mp[Z][X][Y], p[Z][50];
  
  for(a=0;a<100;a++){for(b=0;b<50;b++){for(c=0;c<50;c++){mp[a][b][c]='0';}}}
  scanf("%d", &Tes);
  for(a=0;a<Tes;a++){
    scanf("%d %d", &Lin, &Col);
  	for(b=0;b<Lin;b++){
	  scanf("%s", mp[a][b]);
	}
	scanf("%d", &Plv);
  }

return 0;}
