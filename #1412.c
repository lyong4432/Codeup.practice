#include <stdio.h>


int main() {
    
    char s[90];
    fgets(s, sizeof(s), stdin);
    for(char c = 'a';c<='z';c++){
        int cnt = 0;
        for(int i=0;s[i]!='\0';i++){
            if (c==s[i]) cnt++;
        }
        printf("%c:%d\n",c,cnt);
        
    }
    
}




