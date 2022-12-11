#include <stdio.h>

// 某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？
// output: 一个数，表示共有多少种换法

int main() {

  int a, b, c, d, count = 0;

  for (a = 1; a < 10; a++) {
    for (b = 1; b < 20; b++) {
      for (c = 1; c < 37; c++) {
        for (d = 1; d < 37; d++) {
          if (a + b + c + d == 40 && a * 10 + b * 5 + c * 2 + d * 1 == 100) {
            count++;
          }
        }
      }
    }
  }

  printf("%d\n", count);

  return 0;
}
