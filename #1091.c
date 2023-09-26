#include <stdio.h>


int main() {
    int a,m,d,n,i;
    long long int hap = 0;
    
    
    scanf("%d %d %d %d",&a,&m,&d, &n);
    hap = a;
    for(i=1;i<n;i++)
      hap = hap*m +d;
    
    printf("%lld",hap);
    
   
    
}
