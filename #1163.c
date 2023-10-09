#include <stdio.h>

int main() {
    
    int y,m,d,result;
    scanf("%d %d %d",&y,&m,&d);
    result = y + m + d;
    
    result /= 100;
    result %=10;
    
        if (result%2==0)
            printf("대박");
        else 
            printf("그럭저럭");
   
  
    
    
}
