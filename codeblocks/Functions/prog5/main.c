#include <stdio.h>
#include <math.h>

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int isAdam(int n) {
    int sq = n * n;
    int rev_sq = reverse(sq);
    int rev_n = reverse(n);
    int sq_rev_n = rev_n * rev_n;
    return sq_rev_n == rev_sq;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isAdam(n)) {
        printf("%d is an Adam number.\n", n);
    } else {
        printf("%d is not an Adam number.\n", n);
    }
    return 0;
}
