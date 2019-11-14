#include <stdio.h>
int main(){
	int c,i;
	int ndig[10];
	for(i=0;i<10;i++){ndig[i]=0;}
	while((c=getchar())!=10){
	  if(c>='0' && c<='9')++ndig[c-'0']; 	
	}
	for(i=0; i<10;i++){printf("%d : %d\n",i,ndig[i]);}
	return 0;} 
	
//---------------------------------------------------------------------------------------------------

#include <stdio.h>
int main(){

  char ch;
  int c, i;
  int lista[26];
  for(i=0;i<26;i++){lista[i]=0;}
  while((c=ch=getchar())!=10){
    if(ch>="A" && ch<="Z"){++lista[ch-"A"];}
  }
  for(i=0;i<26;i++){
    if(lista[i]==0){continue;}
    printf("Houve %d ocorrecias de %c",lista[i], i+"A");
  }
  return 0;}

