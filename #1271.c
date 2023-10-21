#include <stdio.h>

int main() {
    int n;
    int max=0;
    int a[1001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {    scanf("%d",&a[i]);
        if (max < a[i])
            max = a[i];

    }
    printf("%d",max);
}
