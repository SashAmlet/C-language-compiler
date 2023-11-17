#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int sum;


    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of numbers %d and %d is equal to %d\n", num1, num2, sum);

    return 0;
}
