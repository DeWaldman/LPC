#include <stdio.h>

int main(){


char lista_plv[3][4];

for(int i=0;i<3;i++){
  scanf("%s", lista_plv[i]);
}

for(int i=0;i<3;i++){
  int k=0;
  while(lista_plv[i][k] != '\0'){
    printf("%c", lista_plv[i][k]);
    k++;
  }
  printf(" ");
}


printf("\n");


printf("%s", lista_plv[0]);

printf("\n");

return 0;
}
