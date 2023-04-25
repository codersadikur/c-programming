#include<stdio.h>
#include<string.h>

int main() {
    char c[12];
    fgets(c, 13, stdin);
    c[11] = '\0';
    printf("%s", c);
    // char c[11];
    // gets(c);
    // scanf("%s", &c);
    // printf("%s", c);
    return 0;
}