#include <stdio.h>


int main() {
    int i,j;
    int arr[11][11]={};
    
    for(i=1;i<=10;i++)
      for(j=1;j<=10;j++)
        scanf("%d",&arr[i][j]);

      i= 2;
      j= 2;

  
      while (1)
      {
        
        if (arr[i][j]==0) {
        arr[i][j] =9;
        j++;
        }

        else if (arr[i][j]==1) 
        {
          if (i==10&&j>8) break;
          j--;
          i++;
          
        }
        else if (arr[i][j]==2)
        {
          arr[i][j] = 9;
          break;
        }
      }
      

      for(i=1;i<=10;i++)
        {for(j=1;j<=10;j++)
        {
      
          printf("%d ",arr[i][j]);
        }
        printf("\n");}
    

    
   
    
}
