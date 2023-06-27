#include <stdio.h>

int solve(int n, int k){
    int i;
    int solved_probs = 0;
    int prob_time = 5;
    int tot_time = 0;
    for(i=1;i<=n;i++){
        tot_time += prob_time;
        if(tot_time + k <= 240){
            solved_probs++;
            prob_time += 5;
        } else {
            break;
        }
    }
    return solved_probs;
}

int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int res = solve(n,k);
    printf("%d",res);
    return 0;
}