#include <stdio.h>

int main() {
    
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    
    if (a +c>b)
        printf("do not advertise");
    else if (a+c == b)
        printf("does not matter");
    else printf("advertise");
}
