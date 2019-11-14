#include <stdio.h>

int main(){

float lista[7], inp; 
int cont, cont2, flag=0;
for(cont=0;cont<7;cont++){lista[cont]=0;}

for(cont=0;cont<7;cont++){
  flag=0;
  printf("Entre um valor >>> ");scanf("%f", &inp);//input

//----------------------------------------------------------
  for(cont2=0;cont2!=7;cont2++){
  	if(lista[cont2]==0){continue;}
  	else if(inp == lista[cont2]){flag=1;break;}
  }
//----------------------------------------------------------

  if(flag){continue;}
  else{lista[cont]=inp;}
}

for(cont=0;cont<7;cont++){
  if(lista[cont]==0){continue;}
  printf(" >>> %.2f\n", lista[cont]);}
// pegar os numeros



return 0;
}



-----------------------------------------------------------------------------------------------------------------



#include <stdio.h>

int main(){

int lista[100]; 
int cont, cont2, flag=0, size=0, inp;
for(cont=0;cont<100;cont++){lista[cont]=0;}


printf("Entre com o size: "); scanf("%d", &size);

for(cont=0;cont<size;cont++){
  flag=0;fflush(stdin);
  printf("Entre um valor >>> ");scanf("%c", &inp); //input

  for(cont2=0;cont2<size;cont2++){
  	if(lista[cont2]==0){continue;}
  	else if(inp == lista[cont2]){flag=1;break;}
  }

  if(flag){continue;}
  else{lista[cont]=inp;}
}

printf("-------------------------------------------\n");

for(cont=0;cont<size;cont++){
  if(lista[cont]==0){continue;}
  printf("> %c", lista[cont]);
  printf(" >>> %c\n", lista[cont]);
}
// pegar os numeros



return 0;
}


/// letras; 
