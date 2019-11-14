#include <stdio.h>

int main(){
  int numf,ht;
  double r, vh;
  scanf("%d",&numf);
  scanf("%d",&ht);
  scanf("%lf",&vh);
  r=ht*vh;
  printf("NUMBER = %d\n", numf);
  printf("SALARY = U$ %.2lf\n", r);
return 0;}

//---------------------------------------------------------------------------------------------------

#include <stdio.h>
int main(){
  float a,b;
  scanf("%f",&a);
  scanf("%f",&b);
  printf("MEDIA = %.5f\n",(((a*3.5)+(b*7.5))/11)); 
return 0;}

//---------------------------------------------------------------------------------------------------

#include <stdio.h>
int main(){
	int A,B,x;
	scanf("%d",&A);
	scanf("%d",&B);
	x=A+B;
	printf("X = %d\n",x);
return 0;}
