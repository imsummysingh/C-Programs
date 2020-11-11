#include <stdio.h>

int main() {
    
    //switch case
    int x;
    printf("Enter your choice: ");
    scanf("%d",&x);
    
    switch(x){
        case 1:
            printf("Your choice is 1\n");
            break;
        case 2: 
            printf("Your choice is 2\n");
            break;
        case 3:
            printf("Your choice is 3\n");
            break;
        case 4:
            printf("Your choice is 4\n");
            break;
        case 5:
            printf("Your choice is 5\n");
            break;
        default:
            printf("No Valid Choice");
    }
    
    return 0;
}