#include <stdio.h>

int main() {
    
    //unary operator
    int x = 1;
    int y = 2;
    int a = 9;
    int b = 8;
    int p,q;
    
    x=++x;
    printf("Pre Increment: %d\n",x);//2
    
    y=y++;
    printf("Post Increment: %d\n",y);//2
    y++;
    p=y;
    printf("After Post Increment Value Assigned: %d\n",p);
    
    a=a--;
    printf("Post Decrement: %d\n",a);//9
    a--;
    q=a;
    printf("After Post Decrement Value Assigned: %d\n",q);
    
    b=--b;
    printf("Pre Decrement: %d\n",b);//7
    
    return 0;
}