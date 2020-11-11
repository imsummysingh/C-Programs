#include <stdio.h>

int main() {
    
    int x =5, *p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("x: %d\n",x);
    printf("p: %u\n",p);
    printf("q: %u\n",q);
    printf("r: %u\n",r);
    
    return 0;
}