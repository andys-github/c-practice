#include <stdio.h>

int main() {

  // POINTERS
  int a = 10;
  int *p = &a;

  printf("Address of 'a': %p\n", &a);
  printf("Value in pointer 'p': %p\n", p);
  printf("Value of 'a': %d\n", a);
  printf("Value pointed by pointer 'p': %d\n", *p); // Dereference
  printf("Adding ONE to pointer 'p': %p\n", p + 1); // should print an address which is 4 bytes more than 'p'

  // POINTERS AND ARRAYS
  int A[5] = {2, 3, 4, 5, 6};
  printf("Address of first element of array A: %p\n", A);
  printf("Second element in A: %d\n", *(A + 1));
  for (int i = 0; i < 5; i++) {
    printf("Address of A[%d]: %p\n", i, &A[i]);
    printf("Address of A[%d]: %p\n", i, A + i);
    printf("Value at A[%d]: %d\n", i, A[i]);
    printf("Value at A[%d]: %d\n", i, *(A + i));
  }

  return 0;
}
