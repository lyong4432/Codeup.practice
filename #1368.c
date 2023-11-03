#include <stdio.h>


int main() {
    
    int n,k;
    char d;
    
    scanf("%d %d %c",&n,&k,&d);
    for(int i=0;i<n;i++)
    {   if (d=='R')
            {for(int j=0;j<n-i-1;j++)
                printf(" ");
            for(int j=0;j<k;j++)
                printf("*");
            printf("\n");}

        else if (d=='L')
        {
            for(int j=0;j<i;j++)
                printf(" ");
            for(int j=0;j<k;j++)
                printf("*");
            printf("\n");}
        }
    }
