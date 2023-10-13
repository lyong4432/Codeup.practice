#include <stdio.h>
#include <math.h>
int main() {
    
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    int cnt=0;
    if (a==1)
        cnt++;
    if (b==1)
        cnt++;
    if (c==1)
        cnt++;
    if (d==1)
        cnt++;   
    if (cnt==0)
        printf("모");
    else if (cnt==1)
        printf("도");
    else if (cnt==2)
        printf("개");
    else if (cnt==3)
        printf("걸");
    else if (cnt==4)
        printf("윷");
    
}
