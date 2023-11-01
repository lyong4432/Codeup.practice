#include <stdio.h>


int main() {
    
    int n;
    
    scanf("%d",&n);
    for(int i=0;i<=n/2;i++)
    {
        for(int j=0;j<n/2-i;j++)
            printf(" ");
        for(int j=0;j<i*2+1;j++)
            printf("*");
        printf("\n");
    }


}
