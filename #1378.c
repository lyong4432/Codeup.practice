#include <stdio.h>


int main() {
    
    int n;
    int Sn=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=i;j++)
            Sn += j;
    
    printf("%d",Sn);
}
