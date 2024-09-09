#include <stdio.h>

void find_max_min(int a[], int len, int *max, int *min) {
    int i;
    *max = a[0];
    *min = a[0];
    for(i = 1; i < len; i++) {
        if(a[i] > *max)
            *max = a[i];
        if(a[i] < *min)
            *min = a[i];
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], max, min;
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    find_max_min(a, n, &max, &min);

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
