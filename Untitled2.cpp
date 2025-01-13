#include <stdio.h>

int main() {
    int a;
    int i;
    int isPrime = 1;  // Flag to indicate if the number is prime

    printf("Please enter your number:\n");
    scanf("%d", &a);

    if (a <= 1) {
        printf("The number is not a prime number:\n");
        return 0;
    }

    for (i = 2; i <= a / 2; ++i) {
        if (a % i == 0) {
            isPrime = 0;  // Set flag to indicate it's not prime
            break;
        }
    }

    if (isPrime) {
        printf("The number is a prime number:\n");
    } else {
        printf("The number is not a prime number:\n");
    }

    return 0;
}
