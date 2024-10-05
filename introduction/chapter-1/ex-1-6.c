#include <stdio.h>

int main(void) {
  int val;
  printf("%s", "整数を入力してください : ");
  scanf("%d", &val);

  printf("%dから7を減じると%dです。\n", val, val - 7);
  
  return 0;
}