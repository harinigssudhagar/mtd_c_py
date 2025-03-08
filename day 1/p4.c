#include <stdio.h>

void findSecondSmallestDigit(long long num) {
    int digits[10] = {0};  // Array to store the presence of digits
    int smallest = 9, second_smallest = 9;
    int found = 0; // Flag to check if at least two distinct digits exist

    // Extract digits
    while (num > 0) {
        int digit = num % 10;
        digits[digit] = 1;  // Mark digit as present
        num /= 10;
    }

    // Find the smallest and second smallest distinct digits
    for (int i = 0; i < 10; i++) {
        if (digits[i]) {
            if (!found) {
                smallest = i;
                found = 1;  // Mark that we found the smallest digit
            } else {
                second_smallest = i;
                printf("The second smallest digit is: %d\n", second_smallest);
                return;
            }
        }
    }

    // If there is no second smallest digit
    printf("No second smallest digit found.\n");
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    findSecondSmallestDigit(num);

    return 0;
}
