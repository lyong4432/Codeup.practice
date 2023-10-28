#include <stdio.h>


int main() {
    int min1 = 1000000;
    int max1 = -1000000;
    int a;
    for(int i = 0; i<5 ; i++)
    {
        scanf("%d",&a);
        if (max1<a)
        {
            max1 = a;
        }
        else if(min1>a)
        {
            min1 = a;
        }
    }
    printf("%d\n%d",max1,min1);
}

