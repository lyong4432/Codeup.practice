#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=1 ; i<=9; i++)
    {   for(int j=1;j<=a*i;j++)
            printf("*");
        printf("\n");

    }
}
