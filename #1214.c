#include <stdio.h>

int main() {
    
    int yy,mm;
    scanf("%d %d",&yy, &mm);
    
    if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
        printf("31");
    else if (mm==4||mm==6||mm==9||mm==11)
        printf("30");
    else if (yy%400==0||(yy%4==0 && yy%100!=0))
        printf("29");
    else printf("28");
}
