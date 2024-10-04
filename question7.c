#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder_1, count = 0, sum = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    
    while (originalNumber != 0) {
        originalNumber /= 10;
        count++;
    }

    originalNumber = number;

    
    while (originalNumber != 0) {
        remainder_1 = originalNumber % 10; 
        sum += pow(remainder_1, count);     
        originalNumber /= 10;              
    }

 
    if (sum == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
