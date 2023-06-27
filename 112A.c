#include <stdio.h>
#include <ctype.h>

int cmpr(char* str1, char* str2){
    while(*str1 && *str2){
        char c1 = tolower(*str1);
        char c2 = tolower(*str2);

        if(c1 > c2){
            return 1;
        } else if(c2 > c1){
            return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}

int main(){
    char str[101];
    char str2[101];
    scanf("%s", str);
    scanf("%s", str2);
    int res = cmpr(str,str2);
    printf("%d",res);
    return 0;
}