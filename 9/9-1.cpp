// sequence table implementation 顺序表的实现
#include <stdio.h>

#define MaxSize 50
typedef int ElemType;
typedef struct {
  ElemType data[MaxSize];
  int len;
} SqList;

bool list_insert(SqList &L, int pos, ElemType element) {
  // 判断插入的位置是否合法，长度是否合法
  // 插入的位置只能是 1 到 列表的长度+1，并且列表的长度不能超过最大长度
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

bool list_delete(SqList &L, int pos) {
  if (pos < 1 || pos > L.len) {
    return false;
  }
  for (int i = pos - 1; i < L.len; i++) {
    L.data[i] = L.data[i + 1];
  }
  L.len--;
  return true;
}

void print_list(SqList L) {
  for (int i = 0; i < L.len; i++) {
    printf("%3d", L.data[i]);
  }
  printf("\n");
}

int main() {
  SqList L;
  L.data[0] = 1;
  L.data[1] = 2;
  L.data[2] = 3;
  L.len = 3;
  ElemType insert_val;
  scanf("%d", &insert_val);
  list_insert(L, 2, insert_val);
  print_list(L);

  int delete_pos;
  scanf("%d", &delete_pos);
  bool res = list_delete(L, delete_pos);
  if (res) {
    print_list(L);
  } else {
    printf("false\n");
  }

  return 0;
}