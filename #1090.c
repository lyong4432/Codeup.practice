#include <stdio.h>


int main() {
    int a,r,n,i;
    long long int hap = 0;
    
    
    scanf("%d %d %d",&a,&r,&n);
    hap = a;
    for(i=1;i<n;i++)
      hap *= r;
    
    printf("%lld",hap);
    
   
    
}
