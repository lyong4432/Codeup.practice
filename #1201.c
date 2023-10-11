#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);

    if (n>0)
        printf("양수");
    else if(n==0)
        printf("0");
    else    
        printf("음수");
    
}
