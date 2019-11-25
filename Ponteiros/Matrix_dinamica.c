#include <stdio.h>
#include <stdlib.h>


int main(void) {
int **A;
int i,j, m=2, n = 3;
A = (int **)malloc( m * sizeof (int ));
for (i = 0; i < m; ++i)
A[i] =(int *) malloc( n * sizeof (int)); 

  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      scanf("%d", &A[i][j]);
    };
  };
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("%d", A[i][j]);
    };
  };
return 0;};
