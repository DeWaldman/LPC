#include <stdio.h>
#include <stdlib.h> 

typedef struct{int dia, mes, ano;}calendario;

typedef struct{
  char nome[50], sobrenome[50], RG[20];
  calendario nascimento;
  calendario admissao;
  int salario;
}emp;




int main(void) {
  /*emp id001, id002, id003;
  emp num_emp[3];
  num_emp[0] = id001;
  num_emp[0] = id002;
  num_emp[0] = id003;
  */
  emp x;
  emp *p;
  p = &x;



  p->salario=1;
  printf("%d\n", p->salario);
  (p+1)->salario=2;
  printf("%d", (p+1)->salario);
  

  

  return 0;
}
