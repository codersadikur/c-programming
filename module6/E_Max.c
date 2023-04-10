#include<stdio.h>
#include<limits.h>

int main() {
    int i, a, max = INT_MIN, min = INT_MAX, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &a);
        if(a > max) {
            max = a;
        }
        if(a < min) {
            min = a;
        }
    }
    printf("%d %d",min, max);
    return 0;
}