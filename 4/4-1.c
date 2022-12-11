#include <stdio.h>

// 12321 yes
// 1231  no

int main()
{
  int a, b = 0, backup_a;
  scanf("%d", &a);
  backup_a = a;

  while (a)
  {
    b = b * 10 + a % 10;
    a = a / 10;
  }
  if (b == backup_a)
  {
    printf("yes\n");
  }
  else
  {
    printf("no\n");
  }

  return 0;
}