#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int n,k,i;
    scanf("%d %d", &n, &k);
    for(i=0;i<k;i++){
        if(n%10==0){
            n = floor(n/10);
        } else {
            n -= 1;
        }
    }
    printf("%d", n);
}