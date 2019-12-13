#include <stdio.h>
#include <stdlib.h>
int MaiorMenorValor(int *v, int *maior, int *menor, int x);
int MaiorMenorValor(int *v, int *maior, int *menor, int x){
  int a;
  *maior = v[0];
  *menor = v[1];
  for(a=0;a<x;a++){
    if(v[a] > *maior){*maior = v[a];}
    else if(v[a] < *menor){*menor = v[a];}
  }
return 0;}


int main(void) {
  int *v, maior=0, menor=0, a;
  int x; scanf("%d", &x);
  v = malloc(sizeof(int)*x);
  for(a=0;a<x;a++){
    scanf("%d", &v[a]);
  }
  MaiorMenorValor(&v[0],&maior, &menor, x);
  printf("%d %d\n", maior, menor);
  free(v);
  return 0;
}
