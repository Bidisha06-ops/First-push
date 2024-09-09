#include <stdio.h>

int main() {
    int num, i, product;

    printf("Enter a number to generate its multiplication table:\n");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        product = num * i;
        printf("%d x %d = %d\n", num, i, product);
    }

    return 0;
}
