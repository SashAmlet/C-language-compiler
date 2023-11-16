#include <stdio.h>

int main() {
    int number;

    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Multiplication table for %d:\n", number);
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
