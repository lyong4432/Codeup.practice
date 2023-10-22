#include <stdio.h>

int main() {
    int a;
    int cnt=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if (a%i==0)
        {
            cnt += 1;
        }
    }
    if (cnt==0) printf("prime");
    else printf("not prime");
}
