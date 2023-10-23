#include <stdio.h>
#include <math.h>

int main() {
    int n,k;
    int hap=1;
    scanf("%d %d",&n, &k);
    for(int i=1;i<=k;i++)
    {
        hap *= n;
    }
    printf("%d",hap);
}
