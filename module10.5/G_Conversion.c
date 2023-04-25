#include<stdio.h>

int main() {
    char c[100001];
    fgets(c, 100001, stdin);
    for(int i = 0; c[i] != '\0'; i++) 
    {
        if(c[i] == ',')
        {
            c[i] = ' ';
        }
        else if(c[i] >= 'a' && c[i] <= 'z') {
            c[i] = c[i] - 32;
        }  
        else if(c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = c[i] + 32;
        }
    }
    printf("%s", c);
    return 0;
}