#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int rep[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &rep[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(rep[i] > 0) {
            rep[i] = 1;
        }
        if(rep[i] < 0) {
            rep[i] = 2;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", rep[i]);
    }
    return 0;
}