#include <stdio.h>

int rev_num(int num) {
    int reversed = 0;
    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    if(num < 1000 || num > 9999) {
        printf("Error: Number must be four digits!\n");
        return 1;
    }

    int reversed = rev_num(num);

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
