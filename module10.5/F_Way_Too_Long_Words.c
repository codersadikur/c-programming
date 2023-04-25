#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        char c[101];
        scanf("%s", &c);
        if(strlen(c) <= 10)
        {
            printf("%s\n", c);
        }
        else if(strlen(c) > 10)
        {
            printf("%c%d%c\n", c[0], strlen(c)-2,c[strlen(c)-1]);
        }
        
    }

    return 0;
}