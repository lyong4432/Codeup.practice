#include <stdio.h>

int main() {
    
    double h,w;
    scanf("%lf %lf",&h, &w);
    double standard_w;
    if (h<150) standard_w=h-100;
    else if(h<160) standard_w=(h-150)/2+50;
    else standard_w = (h-100)*0.9;
    double bmi = (w-standard_w)*100/standard_w;
    // printf("%lf",bmi);

    if (bmi> 20.0) printf("비만");
    else if (bmi>10.0) printf("과체중");
    else printf("정상");
     
}
