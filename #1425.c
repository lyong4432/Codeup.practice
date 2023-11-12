#include <stdio.h>


int main() {
    
    int n,c;
    int temp;
    scanf("%d %d",&n,&c);
    int N[n];
    for (int i=0;i<n;i++)
        scanf("%d",&N[i]);


    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (N[j] > N[j+1]) {
                temp = N[j];
                N[j] = N[j+1];
                N[j+1] = temp;

            }
        }
    }    
    for (int i=0;i<n;i++)
    {   if (i%c==0&&i!=0) printf("\n");
        printf("%d ",N[i]);
        
    }

}
