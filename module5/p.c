#include<stdio.h>

int main() {
    int x, a;
    scanf("%d", &a);
    x = a / 1000;
    if(x % 2 == 0) {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    return 0;
}