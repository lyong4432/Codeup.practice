#include <stdio.h>

#include <string.h>


int main() {
    int n;
    char buffer[12];
    scanf("%d",&n);
    
    sprintf(buffer, "%d", n); // int to String
   printf("%lu",strlen(buffer)); // String의 길이, 단위는 unsigned int
   

}
