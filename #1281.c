#include <stdio.h>


int main() {
    int a,b;
    int hap=0;
    scanf("%d %d",&a, &b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0) {hap -= i;
        printf("-%d",i);}
        else{ hap += i;
        if(i==a)
        printf("%d",i);
        else printf("%+d",i);
        }
    }
    if (hap>=0){
    printf("=%d",hap);}
    else printf("=%d",hap);
}
