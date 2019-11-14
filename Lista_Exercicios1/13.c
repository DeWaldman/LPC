#include <stdio.h>

int main(){

//scanf("%[^\n]", string);// dizer para a scanf() parar de pegar nossa string
                         // somente quando encontrar um caractere
                        // de NEW LINE (um enter). Para isso, usamos o operador: [^\n]

//...
int cont=1;
int maior, menor, meio, var;
printf("valor: "); scanf("%d",&var);
menor = meio =  maior = var;

do{
  printf("valor: "); scanf("%d", &var);
  if(var>maior){meio=maior; maior=var;}
  else if(var<menor){meio=menor; menor=var;}
  else{meio=var;}
  cont++;
}while(cont<3);

printf("%d, %d, %d",menor, meio, maior);
printf("\n");
return 0;
}
