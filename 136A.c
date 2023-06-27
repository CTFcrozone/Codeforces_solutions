#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,i,j;
    scanf("%d", &a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    for(j=1;j<=a;j++){
        for(i=0;i<a;i++){
            if(arr[i]==j){
                printf("%d ", i+1);
            }
        }
    }
    return 0;
}