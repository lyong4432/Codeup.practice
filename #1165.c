#include <stdio.h>

int main() {
    // m : minutes, s : scores
    int m, s;
    scanf("%d %d",&m,&s);
    if (m >= 90) 
        printf("%d",s);
    else
        printf("%d",s+((89-m)/5+1));
  
    
    
}
