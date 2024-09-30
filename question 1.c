#include <stdio.h>
int main() {
    for (int num = 1; num <= 100; num++) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
    }
    return 0;
}
