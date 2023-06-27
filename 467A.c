#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    int pi_qi[n][2];

    for(int i = 0; i < n; i++) {
            scanf("%d %d", &pi_qi[i][0], &pi_qi[i][1]);
    }
    for(int i=0;i<n;i++){
        if(pi_qi[i][1] - pi_qi[i][0] >= 2){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}