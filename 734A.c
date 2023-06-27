#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char outcomes[n];
    scanf("%s", outcomes);
    
    int anton_wins = 0;
    int danik_wins = 0;
    
    for (int i = 0; i < n; i++) {
        if (outcomes[i] == 'A') {
            anton_wins++;
        } else {
            danik_wins++;
        }
    }
    
    if (anton_wins > danik_wins) {
        printf("Anton\n");
    } else if (danik_wins > anton_wins) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }
    
    return 0;
}