#include <stdio.h>

void Double(int *A, int size);

int main() {
  int A[] = { 2, 3, 4 };
  int size = sizeof(A) / sizeof(A[0]);

  Double(A, size);

  for (int i = 0; i < size; i++) {
    printf("%d\n", A[i]);
  }

  return 0;
}

void Double(int *A, int size) {
  for (int i = 0; i < size; i++) {
    A[i] *= 2;
  }

}
