#include <stdio.h>

int main() {
  int i = 5;
  int *i_pointer = &i;
  printf("%d\n", i);
  printf("%d\n", *i_pointer);

  return 0;
}