#include <stdio.h>

int main(void) {
  int n1, n2;
  
  puts("二つの整数を入力してください。");
  printf("%s", "整数n1 : ");
  scanf("%d", &n1);
  printf("%s", "整数n2 : ");
  scanf("%d", &n2);

  printf("それらの積は%dです。\n", n1 * n2);
  
  return 0;
}