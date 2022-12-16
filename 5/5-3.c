#include <stdio.h>
#include <string.h>

int main() {
  char c[100], d[100];

  fgets(c, sizeof(c), stdin);

  int len = strlen(c);
  // printf("%d\n", len);
  for (int i = 0; i < len; i++) {
    d[len - 2 - i] = c[i]; // -2的原因是因为结尾有'\0'
  }
  d[len - 1] = '\n';
  d[len] = '\0';

  int result = strcmp(c, d);

  if (result < 0) {
    printf("%d\n", -1);
  } else if (result > 0) {
    printf("%d\n", 1);
  } else {
    printf("%d\n", 0);
  }

  return 0;
}
