#include <stdio.h>

int main() {
    int i,k;
    
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
      if (i == 3 || i == 6 || i == 9)
        printf("X ");
      else
       printf("%d ",i);
    }
      
   
    
}
