#include <stdio.h>

int main() {
    
    int k;
    k=fun(10);
    printf("The value after Recursion is: %d",k);
    
    return 0;
}

int fun(int a){
    int s;
    if(a==1){
        return (a);
    }
    s=a+fun(a-1);
    return (s);
}