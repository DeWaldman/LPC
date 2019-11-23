#include <stdio.h>

int func(int *x){
  x[(9*12)+11]=42;
return 0;}

int main(void) {
  int m[10][12];
  //int *pnt;
  m[9][11]=23;
  printf("%d\n", m[9][11]);
  func(&m[0][0]);
  //pnt = &m[0][0];
  //pnt[0] = 42;
  printf("%d\n", m[9][11]);

  return 0;
}
