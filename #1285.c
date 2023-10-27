#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    char op;

    scanf("%d",&a);
    int hap = a;
    int b;
    
    while (1)
    {
        scanf("%c", &op);
        if (op == '=')
            break;  

         

        scanf("%d",&b);

        if(op=='+')
            hap += b;
        else if(op=='-')
            hap -= b;
        else if(op=='*')
            hap *= b;
        else if(op=='/')
            hap /= b;
       

        
        
    }
    printf("%d",hap);
   

}
