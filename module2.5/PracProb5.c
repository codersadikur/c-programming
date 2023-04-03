#include<stdio.h>

int main() {
    int money;
    printf("Enter Your Amount:-\n");
    scanf("%d", &money);
    if (money >= 10000) {
        printf("Gucchi Bag\n");
        if (money > 20000) {
            printf("Gucci Belt");
        }
    }
    else if (money >= 5000) {
        printf("Levis Bag");
    }

    else if (money > 0) {
        printf("something");
    }
}