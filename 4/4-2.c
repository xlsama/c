#include <stdio.h>

// n！＝1*2*3…*n

int main()
{
  int n, total = 1;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    total *= i;
  }
  printf("%d\n", total);

  return 0;
}