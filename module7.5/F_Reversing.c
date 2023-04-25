#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int rev[n];
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &rev[i]);
    }
    for(int i = n-1; i >= 0; i--) {
        printf("%d ",rev[i]);
    }
    return 0;
}