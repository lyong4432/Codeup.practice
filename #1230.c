#include <stdio.h>

int main() {
    
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    int f=0;
    if (170>=a) 
    {
        printf("CRASH %d",a);
        f = 1;
    } 
    if (170>=b && f==0) 
    {   printf("CRASH %d",b);
        f = 1;
    } 
    if (170>=c && f==0) 
    {   printf("CRASH %d",c);
        f = 1;
    } 
    if (f==0) printf("PASS");

     
}
