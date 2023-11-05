#include <stdio.h>


int main() {
    
    char N[100000];
    int left=0,right=0;
    scanf("%s",N);
    for(int i=0;i<=100000;i++)
    {
        if (N[i]=='(') left++;
        else if (N[i]==')') right++;
        else if (N[i]=='\0') break;
        
    }
    printf("%d %d",left,right);
    
}
