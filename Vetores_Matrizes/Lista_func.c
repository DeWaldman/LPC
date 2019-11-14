#include <stdio.h>

//-------------------1°-------------------------------------
int is_prime(int x);

int is_prime(int x){
  int i, primo = 1;
  for(i=2;i<x;i++){if(!(x%i)){primo=0;break;}}

return primo;}

int main(){
int input=0;
do{
  scanf("%d", &input);
  printf("%d\n", is_prime(input));
}while(input>=0);

return 0;}


//--------------------2°----------------------------------------
int is_prime(int x);
int soma_prime(int x);

int is_prime(int x){
  int i, primo = 1;
  for(i=2;i<x;i++){if(!(x%i)){primo=0;break;}}
return primo;}

int soma_prime(int x){
  int i, soma=0;
  for(i=2;i<=x;i++){if(is_prime(i)){soma+=i;}}	
return soma;}

int main(){

int input;
do{
  scanf("%d", &input);
  printf("%d\n",soma_prime(input));
}while(input>=0);

return 0;}


//-----------------8º------------------------------------------------

int endswith(int a, int b);
int endswith(int a, int b){


return 0;}



int main(){

int input; scanf("%c", &input);
printf("%d\n", input);


return 0;}


