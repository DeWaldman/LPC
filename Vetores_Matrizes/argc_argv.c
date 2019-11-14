#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int i, soma=0;
if(argc == 1){printf("O comando precisa de parametros!\n");}
else{
  for(i=1;i<argc;i++){soma += atoi(argv[i]);}
  printf("%d\n", soma);
}
return 0;}
