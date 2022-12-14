#include <stdio.h>

int main() {

  for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  printf("5 sizeof = %d\n", sizeof(5));
  printf("100 sizeof = %d\n", sizeof(100));

  return 0;
}
