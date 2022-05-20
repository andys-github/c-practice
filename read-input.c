#include <stdio.h>

int main() {
  char word[100];
  int integer;

  printf("Enter a string and a number: ");
  scanf("%s %d", word, &integer);

  printf("You have entered: %s %d", word, integer);

  return 0;
}
