#include<stdio.h>
#include<string.h>

int main() {
    char c[1000001];
    scanf("%s", c);
    int sz =strlen(c),sum = 0;
    for(int i = 0; i < sz; i++)
    {
        sum = sum + (c[i] - '0');
    }
    printf("%d", sum);
    return 0;
}