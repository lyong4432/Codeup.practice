#include <stdio.h>


int main() {
    char n[201];
    int a = 0;
    
    fgets(n, sizeof(n), stdin);

    for(int i = 0;i<201;i++)
    {
        if (n[i]==' '){
            a += 1;
            if(a==2) break;
        }
        else if (n[i] >= 'a' && n[i] <= 'w'){
            n[i] +=3;
            a = 0;}
        else if (n[i] >= 'x' && n[i] <= 'z'){
            n[i] -= 23;
            a = 0;}


    }
    printf("%s",n);


}

