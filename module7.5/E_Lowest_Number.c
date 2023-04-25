#include<stdio.h>
#include<limits.h>
// Print Lowest Number and It's Positin From an Array!!
int main() {
    int n;
    scanf("%d", &n);
    int low[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &low[i]);
    }
    //Take min to max and if the current value is lowest then the min- you should take current value as min
    int min = INT_MAX,pos;
    for(int i = 0; i < n; i++)
    {
        if(low[i] < min) {
            min = low[i];
            pos = i + 1;
        }
    }
    printf("%d %d", min, pos );
}