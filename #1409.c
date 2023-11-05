#include <stdio.h>


int main() {
    
    int N[10];
    int k;
    for(int i=0;i<10;i++)
        scanf("%d",&N[i]);
    scanf("%d",&k);
    printf("%d",N[k-1]);
    
}
