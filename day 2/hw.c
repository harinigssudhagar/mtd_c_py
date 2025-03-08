#include <stdio.h>

int main() {
    int num, digit, smallest = 9, second_smallest = 9;
    int digits[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    
    while (num > 0) {
        digit = num % 10;
        digits[digit] = 1;  
        num /= 10;
    }

   
    for (int i = 0; i < 10; i++) {
        if (digits[i]) {
            if (smallest == 9) 
                smallest = i;
            else {
                second_smallest = i;
                break;
            }
        }
    }

    
    if (second_smallest == 9)
        printf("No second smallest digit found.\n");
    else
        printf("The second smallest digit is: %d\n", second_smallest);

    return 0;
}
