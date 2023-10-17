#include <stdio.h>


int main() {
    
    int a[7];
    int b[6];
    int cnt = 0;
    int i;
    scanf("%d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6]);
    scanf("%d %d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5]);

    for(i=0;i<6;i++)
        for(int j=0;j<6;j++)
            if (a[i]==b[j]) cnt++;

    if (cnt<=2) printf("0");
    else if(cnt==3) printf("5");
    else if(cnt==4) printf("4");
    else if(cnt==5) 
        {   int f = 0;
            for(i=0;i<6;i++) 
                if (b[i] ==a[6]) {
                    f = 1;
                    break;
                }
            if (f==1) printf("2");
            else printf("3");

        }
    else if(cnt==6)printf("1");
}
