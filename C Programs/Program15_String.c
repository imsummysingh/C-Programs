#include <stdio.h>

int main() {
    
    char s[6]={'s','u','m','m','y','\0'};
    char s1[5]="summy";
    for(int i=0;i<6;i++){
        printf("%c",s[i]);
    }
    
    
    for(int i=0;i<5;i++){
        printf("%c",s1[i]);
    }
    
    return 0;
}