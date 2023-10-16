#include <stdio.h>
#include <math.h>

int main() {
    
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    if (a/(double)b > c/(double)d) printf(">");
    else if (a/(double)b == c/(double)d) printf("=");
    else printf("<");
    
}
