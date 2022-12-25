#include <stdio.h>
#include <stdlib.h>

void change(char *&p) {
  p = (char *)malloc(100);
  fgets(p, 100, stdin);
}

int main() {
  char *p;
  change(p);
  puts(p);
  free(p);

  return 0;
}
