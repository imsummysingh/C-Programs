#include <stdio.h>

int main() {
    
    //Nested If-else Condition
    int x = 9;
    int y = 8;
    int z = 11;
    
    if(x>y){
        printf("x is grater than y\n");
        if(x>z){
            printf("x is greater than z also\n");
        }else{
            printf("z is greater than x\n");
        }
    }
    else{
        printf("y is smaller than x\n");
    }
    
    return 0;
}