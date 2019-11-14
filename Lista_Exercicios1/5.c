#include <stdio.h>

int main(){

int nota, n, cont, maior, menor;

printf("n: ");
scanf("%d",&n);

do{
  printf("\nnota: ");
  scanf("%d", &nota);
}while(nota<0 || nota>10);

maior = nota;
menor = nota;

for(cont=1;cont<n;cont++){
  do{
    printf("\nnota: ");
    scanf("%d", &nota);
  }while(nota>10 || nota<0);
  if(nota>maior){maior = nota;}
  if(nota<menor){menor = nota;}

}

printf("\nmenor: %d \nmaior: %d \n",menor,maior);
return 0;
}
