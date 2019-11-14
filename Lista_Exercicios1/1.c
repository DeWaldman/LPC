#include <stdio.h>

int main(){
	int a;
  do{
		scanf("%d", &a);
	  printf("> %d\n", a*a);
	}
  while(a!=0);
  return 0;
}
