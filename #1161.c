#include <stdio.h>



const char* evenodd(int x)
{   
    if (x%2==0)
        return "짝수";
    else    
        return "홀수";

}

int main() {
    
    int a,b;
    scanf("%d %d",&a,&b);
   
    printf("%s+%s=%s",evenodd(a),evenodd(b),evenodd(a+b));
    
    
}
