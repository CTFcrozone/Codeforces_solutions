#include <stdio.h>
#include <stdlib.h>
#include <string.h>
     
int main()
{
    char liczba[20];
    int i, licznik=0;
    scanf("%s", liczba);
    for(i=0;i<strlen(liczba);i++){
        if(liczba[i]=='4' || liczba[i]=='7'){
            licznik++;
        }
    }
    if(licznik==4 || licznik==7){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}