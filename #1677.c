#include <stdio.h>


int main() {
    
    int n,m,i;
    scanf("%d %d",&n,&m);
    printf("+");
    for(i=1;i<=n-2;i++)
    {   printf("-");
    }
    printf("+\n");
    for(i=1;i<=m-2;i++)
    {
        printf("|");
        for(int j=1;j<=n-2;j++)
    {   printf(" ");
    }

        printf("|\n");
    }
    printf("+");
    for(i=1;i<=n-2;i++)
    {   printf("-");
    }
    printf("+");


}




