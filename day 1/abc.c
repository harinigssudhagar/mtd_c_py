#include <stdio.h>

int main() {
    int num, digit, smallest = 9, second_smallest = 9;
    int digits[10] = {0};

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract digits and mark their presence
    while (num > 0) {
        digit = num % 10;
        digits[digit] = 1;  // Mark the digit as present
        num /= 10;
    }