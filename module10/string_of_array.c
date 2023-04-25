#include<stdio.h>

int main() {
    char c[5];
    int sz = sizeof(c) / sizeof(char);
    printf("%d", sz);

    // Size of int array
    // int a[5];
    // int sz = sizeof(a) / sizeof(int);
    // printf("%d",sz);
    
    //Array of string
    // char ch[5];
    // for(int i = 0; i < 5; i++)
    // {
    //     scanf("%c", &ch[i]);
    // }
    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", ch[i]);
    // }
    return 0;
}