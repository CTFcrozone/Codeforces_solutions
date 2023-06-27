#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int advanceCount = 0;
    int kScore = scores[k - 1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= kScore && scores[i] > 0) {
            advanceCount++;
        } else {
            break;
        }
    }

    printf("%d\n", advanceCount);

    return 0;
}