#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  char c;
  scanf("%c", &c);
  char *p;
  p = (char *)malloc(n);
  fgets(p, n, stdin);
  puts(p);
  free(p);

  return 0;
}
