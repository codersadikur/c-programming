#include <stdio.h>
int main()
{
    int i = 0;
    for(i; i < 3; i = i + 1) {
        printf("%d\n", i);
    }
    printf("%d", i);
//     while (i < 3) {
//         i++;
//         printf("%d\n",i);
//     }
//    printf("%d",i);
   return 0;
}