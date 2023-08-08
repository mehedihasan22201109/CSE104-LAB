#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if i is odd
            if ((i / 2) % 2 != 0) { // Check if it's the second odd number
                sum = sum + i;
            }
        }
    }

    printf("Sum of every second odd number from 1 to %d is: %d\n", n, sum);

    return 0;
}
