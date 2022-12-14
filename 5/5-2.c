#include <stdio.h>

int main() {
  int matchNum = 2, a, b[100], count = 0;

  scanf("%d", &a);

  for (int i = 0; i < a; i++) {
    scanf("%d", &b[i]);
    if (b[i] == matchNum) {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}