#include <stdio.h>

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter n: ");
    
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter an integer greater than or equal to 1.\n");
        return 1;
    }
    
    printf("Sum from 1 to %d is: %d\n", n, sum_to_n(n));
    return 0;
}