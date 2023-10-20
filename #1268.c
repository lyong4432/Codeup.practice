#include <stdio.h>

int main() {
    int n;
    int a;
    int hap=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {scanf("%d", &a);
        if (a%2!=0)
            hap += 1;}
    printf("%d",hap);
}
