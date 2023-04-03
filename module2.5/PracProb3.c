#include<stdio.h>

int main() {
    int a;
    printf("Enter a Number to See Even or Odd\n");
    scanf("%d", &a);
    if (a % 2 !=0 ) {
        printf("This Number is Odd");
    }
    else {
        printf("This number is Even");
    }
    return 0;
}