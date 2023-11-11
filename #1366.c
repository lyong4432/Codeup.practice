#include <stdio.h>


int main() {
    
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        printf("*");

    printf("\n");
    
    for(int i = 1;i<n-1;i++)
    {   
        if (i == n/2) {
            for(int i=0;i<n;i++)
                printf("*");
        }
        else {
        for(int j=0;j<n;j++)
        {
            if (j==i || j==0 || j ==n-1 || j==n-i-1 || j == n/2)
                printf("*");
            else printf(" ");
        }
        }
        printf("\n");
    }

    for(int i=0;i<n;i++)
        printf("*");
    

}




