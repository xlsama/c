#include <cstdio>
#include <stdio.h>

#define MaxSize 50
typedef int ElemType;
typedef struct {
  ElemType data[MaxSize];
  int len;
} SqList;

bool list_insert(SqList &L, int pos, ElemType element) {
  if (pos < 1 || pos > L.len + 1 || L.len >= MaxSize) {
    return false;
  }
  for (int i = L.len; i >= pos; i--) {
    L.data[i] = L.data[i - 1];
  }
  L.data[pos - 1] = element;
  L.len++;
  return true;
}

void print_list(SqList L) {
  for (int i = 0; i < L.len; i++) {
    printf("%4d", L.data[i]);
  }
  printf("\n");
}

int main() {
  SqList L;
  L.data[0] = 1;
  L.data[1] = 2;
  L.data[2] = 3;
  L.len = 3;
  bool result = list_insert(L, 2, 60);
  if (result) {
    printf("insert success\n");
    print_list(L);

  } else {
    printf("insert failed\n");
  }

  return 0;
}