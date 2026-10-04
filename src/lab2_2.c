#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter an integer greater than or equal to 0.\n");
        return 1;
    }
    
    printf("Factorial of %d is: %lld\n", n, factorial(n));
    return 0;
}