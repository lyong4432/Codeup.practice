#include <stdio.h>
#include <math.h>
int main() {
    
    int a,b;
    scanf("%d %d",&a, &b);
    int cnt = 0;

    switch (a)
    {
    case 1:
    cnt += 400;
        break;
    case 2:
    cnt += 340;
        break;
    case 3:
    cnt += 170;
        break;
    case 4:
    cnt += 100;
        break;
    case 5:
    cnt += 70;
        break;
    
    }
    switch (b)
    {
    case 1:
    cnt += 400;
        break;
    case 2:
    cnt += 340;
        break;
    case 3:
    cnt += 170;
        break;
    case 4:
    cnt += 100;
        break;
    case 5:
    cnt += 70;
        break;
    
    }
    
    if (cnt>500)
        printf("angry");
    else    
        printf("no angry");
}
