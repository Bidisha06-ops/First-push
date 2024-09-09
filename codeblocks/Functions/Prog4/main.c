#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    if (n == 0) {
        printf("0");
        return;
    }

    printf("%d ", a);

    for (i = 2; i <= n; i++) {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
