#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);

    if (n>20)
        printf("비만");
    else if (n>10)
        printf("과체중");
    else 
        printf("정상");
   
    
}
