#include<stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    char c[n];
    scanf("%s", c);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int min = c[i] - '0';
        ans = ans + min;
    }
    printf("%d", ans);
    return 0;
}