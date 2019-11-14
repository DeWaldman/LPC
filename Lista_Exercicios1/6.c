#include <stdio.h>

int main(){

int n, i, soma, var;
scanf("%d", &n);

for(i=0; i<n; i++){
  scanf("%d", &var);
  if(var%2==0){soma+=var;}
}
printf("%d\n", soma);

return 0;
}
