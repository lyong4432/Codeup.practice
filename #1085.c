#include <stdio.h>


int main() {
    long long int h,b,c,s;
    double answer;
    
    scanf("%lld %lld %lld %lld",&h, &b, &c, &s);
    answer = (h*b*c*s)/8;
    answer = answer/1024;
    answer = answer/1024;
    printf("%.1f MB",answer);


    
   
    
}
