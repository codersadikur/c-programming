#include<stdio.h>
#include<string.h>

int main() {
    char c[1000001];
    fgets(c, 1000001,stdin);
    for(int i = 0; c[i]!='\\'; i++)
    {
        printf("%c", c[i]);
    }
    return 0;
}