#include <stdio.h>

int main() {
    int a,b;

    scanf("%d %d",&a,&b);
    printf("%d",
    (a%2==0?a/2*10:a/2+1 )+ (b%2==0?b/2*10:b/2+1 ));
}
