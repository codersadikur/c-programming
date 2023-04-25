#include<stdio.h>
#include<string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    // strcpy(a, b);
    // printf("%s %s", a, b);
    // strcpy and using loop are similar for copy.

    for(int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    // for(int i = 0; i < 4; i++)
    // {
    //     a[i] = b[i];
    // }
    // a[4] = '\0';
    printf("%s %s", a, b);
    return 0;
}