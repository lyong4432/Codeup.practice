#include <stdio.h>

int main() {
    int a,c;
    char b;
  
    scanf("%d%c%d",&a,&b,&c);
    switch (b)
    {
    case '+':
    printf("%d",a+c);
        break;
    case '-':
    printf("%d",a-c);
        break;
    case '*':
    printf("%d",a*c);
        break;
    case '/':
    printf("%.2lf",a/(double)c);
        break;
    }
    
   
}
