#include <stdio.h>


int main() {
    
    int h,r;
    
    
    scanf("%d %d",&h, &r);
    for(int k=0;k<r;k++)
     {  for(int i=0;i<h;i++)
        {       
                for(int j=0;j<i;j++)
                    printf(" ");
                printf("*\n");        
        }
            for(int i=h-2;i>=0;i--)
        {       
                for(int j=0;j<i;j++)
                    printf(" ");
                printf("*\n");        
        }  

    }  
}




