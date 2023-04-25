#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[100002] = {0};
    for(int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        ar[a]++;
    }
    for(int i = 1; i <=m; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}