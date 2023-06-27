#include <stdio.h>
#include <ctype.h>

int main() {
    int i, j;
    int dstcnt = 0;
    int dplccnt = 0;
    int colors[4];
    for (i = 0; i < 4; i++) {
        scanf("%d", &colors[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < i; j++) {
            if (colors[i] == colors[j]) {
                dplccnt++;
                break;
            }
        }
        if (j == i) {
            dstcnt++;
        }
    }
    printf("%d", 4 - dstcnt);

    return 0;
}