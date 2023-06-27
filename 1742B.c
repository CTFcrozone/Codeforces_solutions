#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool canRearrange(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmpfunc);

    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        if (canRearrange(arr, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}