#include <stdio.h>
void swap(int*, int*);
int main() {
    int x=4,y=5;
    printf("The value before swap\n");
    printf("The value of X: %d & Y: %d\n",x,y);
    swap(&x,&y);
    printf("The value after swap\n");
    printf("The value of X: %d & Y: %d\n",x,y);
    
    return 0;
}

void swap(int*a, int*b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}