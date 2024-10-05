#include <stdio.h>

int main(void) {
  int value;
  printf("%s", "整数を入力してください :");
  scanf("%d", &value);

  printf("%dに13を加えると%dです。\n", value, value + 13);
  
  return 0;
}