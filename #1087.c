#include <stdio.h>


int main() {
    long long int i=1,n=0,hap=0;
    
    
    scanf("%lld",&n);
    while(n>hap)
    {
      hap += i;
      i += 1;
    }
    printf("%lld",hap);

    
   
    
}
