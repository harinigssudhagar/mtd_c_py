#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void nextGreaterNumber(int num) {
    int digits[10], i = 0, j;

    // Step 1: Store digits of the number in the array
    while (num > 0) {
        digits[i++] = num % 10;
        num /= 10;
    }

    // Step 2: Find the rightmost pair where digits[i] < digits[i + 1]
    int idx = -1;
    for (j = 0; j < i - 1; j++) {
        if (digits[j] < digits[j + 1]) {
            idx = j;
            break;
        }
    }

    if (idx == -1) {
        printf("No larger number possible\n");
        return;
    }

    // Step 3: Find the smallest number larger than digits[idx] from the right
    int smallestIdx = idx + 1;
    for (j = idx + 2; j < i; j++) {
        if (digits[j] > digits[idx] && digits[j] < digits[smallestIdx]) {
            smallestIdx = j;
        }
    }

    // Step 4: Swap digits[idx] and digits[smallestIdx]
    swap(&digits[idx], &digits[smallestIdx]);

    // Step 5: Sort the digits after the swapped position in ascending order
    for (j = idx + 1; j < i - 1; j++) {
        for (int k = j + 1; k < i; k++) {
            if (digits[j] > digits[k]) {
                swap(&digits[j], &digits[k]);
            }
        }
    }

    // Step 6: Reconstruct the number from the digits array
    int result = 0;
    for (j = i - 1; j >= 0; j--) {
        result = result * 10 + digits[j];
    }

    printf("Next greater number: %d\n", result);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    nextGreaterNumber(num);

    return 0;
}
