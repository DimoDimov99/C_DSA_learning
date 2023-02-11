#include <stdio.h>
#include <stdlib.h>

int change_value(int *num, int new_value) {
  *num = new_value;
  return *num;
}

int main(void) {
  int x = 5;
  printf("Before change: %d\n", x);
  int y = change_value(&x, 10);
  printf("After change: %d\n", y);
  return 0;
}
