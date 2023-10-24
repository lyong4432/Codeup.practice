#include <stdio.h>


int main() {
    int a,b;
    int hap=0;
    scanf("%d %d",&a, &b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0) hap -= i;
        else hap += i;
    }

    printf("%d",hap);
}
