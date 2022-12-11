#include <stdio.h>

int main()
{
  int num = 0, total = 100;
  while (total)
  {
    num += total;
    total--;
  }
  printf("%d\n", num);

  return 0;
}