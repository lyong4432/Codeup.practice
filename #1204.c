#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int i;
    i = n%10;
    if (i>3||i==0)
        printf("%dth",n);
    else {   
        if (n/10==1)
        {
            printf("%dth",n);
        }
        else {
            if (i==1) printf("%dst",n);
            else if (i==2) printf("%dnd",n);
            else if (i==3) printf("%drd",n);

        }
   
    }
}
