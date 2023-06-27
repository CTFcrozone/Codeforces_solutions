#include <stdio.h>
#include <string.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int cnt=0;
    while(a<=b){
        a = a * 3;
        b = b * 2;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
    
}