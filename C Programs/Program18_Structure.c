#include <stdio.h>

struct date{
    int d,m,y;
};

int main() {
   
  struct date today;
  today.d=11;
  today.m=11;
  today.y=2020;
  printf("%d %d %d",today.d,today.m,today.y);
    
    return 0;
}
