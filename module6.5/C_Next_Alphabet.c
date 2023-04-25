#include<stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c < 'z') {
        c++;
        printf("%c", c);
    }
    else if(c == 'z') {
        printf("a");
    }
    return 0;
}