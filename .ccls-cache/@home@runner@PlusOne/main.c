#include <stdio.h>

int plusone(int digits[], int s, int result[]) {
  int rem, a = 0, i;
  for (i = 0; i < s; i++) {
    a = a * 10 + digits[i];
  }
  a += 1;
  i = 0;
  while (a > 0) {
    rem = a % 10;
    result[i] = rem;
    a /= 10;
    i++;
  }
  // Reverse the result array
  for (int j = 0; j < i / 2; j++) {
    int temp = result[j];
    result[j] = result[i - j - 1];
    result[i - j - 1] = temp;
  }
  return i;
}

int main(void) {
  int size,nsize, digits[20];
  printf("Enter the size of array: ");
  scanf("%d", &size);
  printf("Enter the elements for array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &digits[i]);
  }
  int result[20];
  nsize=plusone(digits, size, result);
  for (int i = 0; i < nsize ; i++) {
    printf("%d", result[i]);
  }
  return 0;
}