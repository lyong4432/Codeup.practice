#include <stdio.h>


int main() {
    char n[1001];
    scanf("%s",n);
  

    for(int i = 0;i<1001;i++)
    {
        if (n[i]==' ') break;
        else if (n[i] >= 'A' && n[i] <= 'Z')
            n[i] += 32;
        else if (n[i] >= 'a' && n[i] <= 'z')
            n[i] -= 32;


    }
    printf("%s",n);


}

