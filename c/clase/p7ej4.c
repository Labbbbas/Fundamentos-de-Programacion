#include <stdio.h>

int main(){
  int a=9,b=2,c=5,d=3;
  
  printf("Las operaciones logicas son:\n");
  printf("%d para el inciso B\n", (!(a>b)) || b<=c);
  printf("%d para el inciso C\n", c>d || c==a);
  printf("%d para el inciso D\n", b==(c-d) || (a+b)>=(c*d));
  printf("%d para el inciso E\n", c>5 && c>b || a<=d);

  return 0;
}