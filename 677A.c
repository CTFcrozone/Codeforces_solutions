#include <stdio.h>

int main() {
    int n, h;
    int toth, defh, excdh;
    defh = 1;
    excdh = 2;
    scanf("%d %d", &n, &h);
    int frnsh[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &frnsh[i]);
    }
    toth = 0;
    for (int i = 0; i < n; i++) {
        if (frnsh[i] > h) {
            toth += excdh; 
        } else {
            toth += defh;  
        }
    }
    printf("%d\n", toth);
    return 0;
}