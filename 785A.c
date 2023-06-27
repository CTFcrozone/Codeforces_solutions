#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int n;
    int sum=0;
    scanf("%d",&n);
    char shapes[n+1][25];
    for(size_t i=0;i<n;i++){
        scanf("%s",shapes[i]);
    }
    for(size_t i=0;i<n;i++){
        if(strcmp(shapes[i],"Tetrahedron")==0){
            sum+=4;
        } else if (strcmp(shapes[i],"Cube")==0){
            sum+=6;
        } else if(strcmp(shapes[i],"Octahedron")==0){
            sum+=8;
        } else if(strcmp(shapes[i],"Dodecahedron")==0){
            sum+=12;
        } else if(strcmp(shapes[i],"Icosahedron")==0) {
            sum+=20;
        }
    }
    printf("%d",sum);
    return 0;
}