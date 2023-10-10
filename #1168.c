#include <stdio.h>

int main() {
    
    int ymd,a;
    int standard=12;
    scanf("%d %d",&ymd,&a);
    ymd /= 10000;
    // printf("%d",ymd);
    if (a==1||a==2)
        standard += 100;
    
    printf("%d",standard-ymd+1);

    

    
}
