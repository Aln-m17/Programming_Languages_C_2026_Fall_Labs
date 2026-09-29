#include <stdio.h>

long long factorial(int n) {
  long long result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(void) {
  int n;

  printf("Enter n: ");
  if (scanf("%d", &n) != 1) {
    printf("Error: invalid input, expected an integer.\n");
    return 1;
  }

  if (n < 0) {
    printf("Error: factorial is not defined for negative numbers.\n");
    return 1;
  }

  if (n > 20) {
    printf("Warning, %d! overflows long long, result will be wrong.\n", n);
  }

  printf("%d! = %lld\n", n, factorial(n));
  return 0;
}