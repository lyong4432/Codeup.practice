#include <stdio.h>

int main() {
    int n;
    int a;
    int hap=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {scanf("%d", &a);
        hap += a;}
    printf("%d",hap);
}
