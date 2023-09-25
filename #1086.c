#include <stdio.h>


int main() {
    int w,h,b;
    double answer;
    
    scanf("%d %d %d",&w, &h, &b);
    answer = (w*h*b)/8;
    answer = answer/1024;
    answer = answer/1024;
    printf("%.2f MB",answer);


    
   
    
}
