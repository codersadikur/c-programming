#include<stdio.h>

int main() {
    int a, b , value;
    printf("Enter a Number\n");
    scanf("%d", &a);
    printf("Enter Another Number\n");
    scanf("%d", &b);
    value = a + b;
    printf("Summation of %d and %d is:%d\n", a, b, value);
    value = a - b;
    printf("Subtraction of %d and %d is:%d\n", a, b, value);
    value = a * b;
    printf("multiplication of %d and %d is:%d\n", a, b, value);
    value = a / b;
    printf("division  of %d and %d is:%d\n", a, b, value);
    return 0;
}