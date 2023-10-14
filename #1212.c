#include <stdio.h>
#include <math.h>
int main() {
    
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    int d = (a>b?a:b)>c?(a>b?a:b):c;
    int hap = a+b+c-d;
    
    if (d<hap)
        printf("yes");
    else    
        printf("no");
}
