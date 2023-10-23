#include <stdio.h>


int main() {
    int n;
    int hap=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d %d %d",a[0],a[n/2],a[n-1]);
}
