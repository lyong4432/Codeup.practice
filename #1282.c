#include <stdio.h>
#include <math.h>


int main() {
    int n;
    double sqrtN;
    int k=0;
    scanf("%d",&n);
    for(int i = n;i>=1;i--)
    {
        sqrtN = sqrt(i);
        if (sqrtN == (int)sqrtN){ // sqrtN 소수점 이하가 0인지 확인 
            printf("%d %d",k,(int)sqrtN); 
            break;
        } else k++;
    }
   

}
