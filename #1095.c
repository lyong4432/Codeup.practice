#include <stdio.h>


int main() {
    int n, i, t;
    int a[10000]={};
    scanf("%d", &n); //개수 입력받기
    int min = 23;
    for(i=1; i<=n; i++) //개수만큼 입력받기
    {
      scanf("%d", &t); //읽어서
      if (min > t)
        min = t;
    }
    printf("%d",min);

    
   
    
}
