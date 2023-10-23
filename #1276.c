#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int hap=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        hap *= i;
    }
    printf("%d",hap);
}
