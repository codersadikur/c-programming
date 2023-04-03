#include<stdio.h>

int main() {
    int a;
    printf ("Enter a Number:\n");
    scanf("%d", &a);
    if (a > 0) {
        printf("This Number  is Positve");
    }
    else if (a < 0) {
        printf("This Number is Negative");
    }
    else {
        printf("This is Zero");
    }
    return 0;
}