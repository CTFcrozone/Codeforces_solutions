#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,i;
    scanf("%d", &a);
    for(i=1;i<a;i++){
        if(i%2!=0){
            printf("I hate that ");
        }
        if(i%2==0){
            printf("I love that ");
        }
    }
    if(a%2!=0){
        printf("I hate it");
    }
    if(a%2==0){
        printf("I love it");
    }
    return 0;
}