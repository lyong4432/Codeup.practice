#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int i,j;
    i = n/10;
    j = n%10;
    n = (j * 10 + i )*2;
    if (n>100)
        {i = n/100;
        n -= i*100;}
    printf("%d\n",n);

    if (n <= 50)
        printf("GOOD");
    else 
        printf("OH MY GOD");
    
}
