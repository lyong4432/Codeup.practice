#include <stdio.h>
#include <math.h>

int main() {
    
    int time,a,b;
    scanf("%d %d %d",&time, &a, &b);
    
       

    if (time<90)
        a += (89-time)/5 + 1;

    
    if (a>b) printf("win");
    else if (a==b) printf("same");
    else printf("lose");
    
}
