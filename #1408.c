#include <stdio.h>


int main() {
    
    char s[20];
    scanf("%s",s);
    for(int i = 0; s[i] != '\0';i++) {
        printf("%c",s[i]+2);
    }
    printf("\n");
    for(int i = 0; s[i] != '\0';i++) {
        printf("%c",(s[i]*7)%80+48);
    }
    
}
