#include <stdio.h>

int main(void) {
  int n1, n2, n3;

  printf("%s", "三つの整数を入力してください。\n");
  
  printf("%s", "整数n1 : "); scanf("%d", &n1);
  printf("%s", "整数n2 : "); scanf("%d", &n2);
  printf("%s", "整数n3 : "); scanf("%d", &n3);

  printf("それらの和は%dです。\n", n1 + n2 + n3);
  
  return 0;
}