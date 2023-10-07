#include <stdio.h>

int main() {
    
    int y,m,d,result;
    scanf("%d %d %d",&y,&m,&d);
    result = y - m + d;
        if (result%10==0)
            printf("대박");
        else 
            printf("그럭저럭");
   
  
    
    
}
