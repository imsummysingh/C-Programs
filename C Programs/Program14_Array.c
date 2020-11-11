#include <stdio.h>

int main() {
    
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    float avg;
    
    printf("For printing data\n");
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    
    for(int i=0;i<10;i++){
        sum=sum+a[i];
    }
    printf("Sum is: %d\n",sum);
    
    avg=sum/10.0;
    printf("Average is: %f\n",avg);
    
    return 0;
}