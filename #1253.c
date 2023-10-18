#include <stdio.h>

int main() {
    int a, b;
    int tmp;
    scanf("%d %d",&a,&b);
    if (b<a) {
        tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i<=b;i++)
        printf("%d ",i);

     
}
