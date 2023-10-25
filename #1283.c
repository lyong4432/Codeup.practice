#include <stdio.h>


int main() {
    int a,b;
    
    double differ;
    scanf("%d",&a);
    
    scanf("%d",&b);
    double c = a;
    int B[b];
    for(int i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
     
        c = c+ c*(B[i]/(double)100);

        
        
       
    }
    differ = c-a;
    if (differ>0){
        printf("%.0lf\ngood",differ);
    }else if(differ==0){
        printf("%.0lf\nsame",differ);
    }else {
        printf("%.0lf\nbad",differ);
    }
}
