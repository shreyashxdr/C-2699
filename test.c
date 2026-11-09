#include <stdio.h>

int main() {
    float number, square;

    printf("Enter a number: ");
    scanf("%f", &number);

    square = number * number;

    printf("The square of %.2f is %.2f\n", number, square);

    return 0;
} 