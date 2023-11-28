#include <stdio.h>

int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    int y = sumOfDigits(number);

    printf("Sum of digits: %d\n", y);

    return 0;
}
