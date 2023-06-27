#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int x=0;
    char stat[4];
    scanf("%d",&n);
    for(size_t i = 0; i<n;i++){
        scanf("%s",stat);
        if(strcmp(stat,"++X")==0 || strcmp(stat,"X++")==0){
            x++;
        } else if(strcmp(stat,"--X")==0 || strcmp(stat,"X--")==0) {
            x--;
        }
    }   
    printf("%d",x);
}