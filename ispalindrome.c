#include <stdio.h>

int main() {
    int num, digit, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // keep the original number

    while (num > 0) {
        digit = num % 10;         // extract the last digit
        reversed = reversed * 10 + digit; // construct the reversed number
        num = num / 10;           // eliminate the last digit
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
