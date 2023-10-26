#include <stdio.h>

int prime(int a){
    int cnt;
    if (a==2) return 1;
    else {
        cnt=0;
        for(int j=2;j<a;j++)
        {
            if(a%j==0){
                cnt += 1;
                break;
            }
        }
        if(cnt==0) return 1;
        else return 2;
    }

}

int main() {
    int n;
    int flag=0;
    scanf("%d",&n);
    for (int i=2;i<(n/2);i++){
        if(n%i==0){
            
            if (prime(i)+prime(n/i)==2)
            {
                flag =1;
                printf("%d %d",i,n/i);
                break;
            }
        }
        
    }
    if (flag==0)
    printf("wrong number");
}
