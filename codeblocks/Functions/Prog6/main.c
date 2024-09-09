#include <stdio.h>

void count(int n, int m, int *even, int *odd) {
    int i;
    *even = 0;
    *odd = 0;
    for (i = n; i <= m; i++) {
        if (i % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}

int main() {
    int n, m, even, odd;
    printf("Enter the starting number: ");
    scanf("%d", &n);
    printf("Enter the ending number: ");
    scanf("%d", &m);
    count(n, m, &even, &odd);
    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);
    return 0;
}
