#include <stdio.h>


int main() {
    int h,w,n,l,d,x,y,i,j;
    int arr[101][101];
    scanf("%d %d",&h, &w);

    

    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        scanf("%d %d %d %d",&l, &d, &x, &y);
        if (d==0)
        {
          for(j=y;j<y+l;j++)
            arr[x][j] = 1;
        }
        else
        {
            for(j=x;j<x+l;j++)
            arr[j][y] = 1;
        }

      }

      for(i=1;i<=h;i++)
        {for(j=1;j<=w;j++)
        {
      
          printf("%d ",arr[i][j]);
        }
        printf("\n");}
    

    
   
    
}
