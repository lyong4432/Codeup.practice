#include <stdio.h>

int main() {
    char a, b;
    int tmp;
    scanf("%c %c",&a,&b);
    if (b<a) {
        tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i<=b;i++)
        printf("%c ",i);

     
}
