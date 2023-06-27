#include <stdio.h>

int count_damaged_dragons(int k, int l, int m, int n, int d) {
    int damaged_dragons = 0;
    int dragon;

    for (dragon = 1; dragon <= d; dragon++) {
        if (
            dragon % k == 0 ||
            dragon % l == 0 ||
            dragon % m == 0 ||
            dragon % n == 0
        ) {
            damaged_dragons++;
        }
    }

    return damaged_dragons;
}

int main() {
    int k, l, m, n, d;
    int result;

    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);
    
    result = count_damaged_dragons(k, l, m, n, d);
    printf("%d\n", result);

    return 0;
}