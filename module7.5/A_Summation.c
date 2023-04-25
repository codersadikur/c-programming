#include<stdio.h>

int main() {
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    int a_sum[n];
    for(int i = 0;i < n; i ++)
    {
        scanf("%d", &a_sum[i]);
    }
    for(int i = 0; i < n; i++)
    {
        sum+=a_sum[i];
    }
    if(sum < 0) {
        printf("%lld", sum * -1);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}