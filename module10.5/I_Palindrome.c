#include<stdio.h>
#include<string.h>

int main() {
    char c[1001];
    scanf("%s", c);
    char s[1001];
    for(int i = 0; i <= strlen(c); i++)
    {
        s[i] = c[i];
    }
    int j = strlen(c) - 1;
    for(int i = 0; i <= j; i++)
    {
        char temp = c[i];
        c[i] = c[j];
        c[j] = temp;
        j--; 
    }
    int yes = 0, no = 0;
    for(int i = 0; c[i] != '\0'; i++)
    {
        if(c[i] == s[i])
        {
            yes++;
        }
        else
        {
            no++;
        }
    }
    if(yes == strlen(c))
    {
        printf("YES");
    }
    else if(no = strlen(c))
    {
        printf("NO");
    }

    
    return 0;
}