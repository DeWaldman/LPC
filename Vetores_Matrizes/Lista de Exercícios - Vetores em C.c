#include <stdio.h>

void ex01(){
  int a, n; scanf("%d", &n);
  float v[n];
  for(a=0;a<n;a++){
    scanf("%f", &v[a]);
  }
  for(a=n-1;a>=0;a--){
    printf("%.1f  ", v[a]);
  }
  printf("\n");
}

void ex02(){
  int a, n=8;
  int v[8];
  for(a=4;a<n;a++){
    scanf("%d", &v[a]);
    if(a==7){
      a=-1;
      n=4;
    }
  }
  for(a=0;a<8;a++){
    printf("%d ", v[a]);
  }
  printf("\n");
}

int main(void) {
  //ex01();
  //ex02();
}
