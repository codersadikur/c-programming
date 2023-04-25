#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sear[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &sear[i]);
    }
    int x , y = -1;
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if(sear[i] == x) {
            y = i;
            break;
        }
    }
    printf("%d",y);
    return 0;
}