#include <stdio.h>


int main() {
    
    int n;
    scanf("%d",&n);
    int N[n];
    for (int i = 0 ; i < n ; i ++ ){
        scanf("%d",&N[i]);
    }
    for (int i = 0 ; i < n; i++){
        printf("%d: ",i+1);
        for (int j = 0; j < n; j++){
            if (i == j ) continue;
            if (N[i] > N[j]) printf("> ");
            else if(N[i]==N[j]) printf("= ");
            else printf("< ");
        }
        printf("\n");
    }
    
}




