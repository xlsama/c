#include <stdint.h>
#include <stdio.h>

void change(int *j) { *j = 5; }

int main() {
  int i = 10;
  printf("%d\n", i);
  change(&i);
  printf("%d\n", i);
  return 0;
}
