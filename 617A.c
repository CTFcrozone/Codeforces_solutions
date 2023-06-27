#include <stdio.h>
#include <string.h>

int kroki(int n){
    int steps[] = {5,4,3,2,1};
    int min=0;
    int i;
    for(i=0;i<5;i++){
        min += n/steps[i];
        n%=steps[i];
    }
    return min;

}

int main() {
    int n;
    scanf("%d",&n);
    int res = kroki(n);
    printf("%d",res);
    return 0;
    
}