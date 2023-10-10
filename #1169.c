#include <stdio.h>

int main() {
    
    int years;
    int a = 3;
    int standard=12;
    scanf("%d",&years);
    if (years >13)
        {standard += 100;
        a = 1;}
    int result = standard-years+1;
    if (result == 100)
        result = 0;
    printf("%d %d",result,a);

    
}
