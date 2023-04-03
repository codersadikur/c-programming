#include<stdio.h>

int main() {
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000) {
        printf("cox'sbazar zabo\n");
        if (tk >= 100000) {
            printf("sentmartin zabo");
        }
        else {
            printf("sentmartin zabo na");
        }
    }
    else {
        printf("kothaw jabo na");
    }
    return 0;
}