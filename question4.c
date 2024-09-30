#include <stdio.h>

int main() {
    int number, isPrime = 1; 
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 2) {
        isPrime = 0; 
    } else {
        
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; 
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
