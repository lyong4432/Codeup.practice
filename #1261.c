#include <stdio.h>

int main() {
    int a[10];
    int f = 0;
    for (int i=0;i<10;i++)
        scanf("%d",&a[i]);

    for (int i=0;i<10;i++)
    {
        if(a[i]%5==0)
            {printf("%d",a[i]);
            f = 1;
            break;}
    }
    if (f==0) printf("0");
   
}
