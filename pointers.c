#include <stdio.h>

int main() {
  int a = 10;
  int *p = &a;

  printf("Address of 'a': %p\n", &a);
  printf("Value in pointer 'p': %p\n", p);
  printf("Value of 'a': %d\n", a);
  printf("Value pointed by pointer 'p': %d\n", *p); // Dereference

  printf("Adding ONE to pointer 'p': %p\n", p + 1); // should print an address which is 4 bytes more than 'p'

  return 0;
}
