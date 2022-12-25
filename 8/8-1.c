#include <stdio.h>

typedef struct student {
  int num;
  char name[20];
  char gender;
} stu;

int main() {

  stu s;
  scanf("%d%s %c", &s.num, s.name, &s.gender);
  printf("%d %s %c\n", s.num, s.name, s.gender);

  return 0;
}