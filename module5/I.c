#include<stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if(0 <= A && B <= 100 && A >= B) {
        printf("Yes");
    }
    else if(0 <= A && B <= 100 && B > A) {
        printf("No");
    }
    return 0;
}