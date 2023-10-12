#include <stdio.h>
#include <math.h>
int main() {
    
    double a,b;
    scanf("%lf %lf",&a, &b);
    double i,j,max1=0;
    if (a>=b){
        i = a;
        j = b;
    } else {
        i = b;
        j = a;
    }
    if (i + j>max1) max1 = i+j;
    if (i-j>max1)max1 = i-j;
    if (i / j>max1) max1 = i / j;
    if (i * j>max1)max1 = i*j;
    if(pow(j,i)>max1)max1 = pow(j,i);
    printf("%.6lf",max1);
    

    
}
