#include <stdio.h>

int _isupper(int n);

int main() {
  char input;

  printf("Enter a character: ");
  scanf("%c", &input);

  if (_isupper(input)) {
    printf("The character '%c' is an uppercase.\n", input);
  } else {
    printf("The character '%c' is not an uppercase.\n", input);
  }
}
