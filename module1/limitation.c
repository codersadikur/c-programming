#include<stdio.h>

int main() {
    int a = 1000000000;
    long long int b = 10000000000;
    float c = 20935.3333444556789;
    double d = 2.123456789123456;
    printf("%0.15f\n", d);
    printf("%0.15f", c);
    return 0;
}