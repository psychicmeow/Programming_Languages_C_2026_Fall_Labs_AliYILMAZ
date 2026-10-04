#include <stdio.h>

int is_prime(int n) {
  if (n < 2) return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
  int n;
  printf("Enter n: ");

  if (scanf("%d", &n) != 1 || n < 2) {
    printf("Error: Please enter an integer greater than or equal to 2.\n");
    return 1;
  }

  printf("Primes up to %d: ", n);
  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}