#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    if(n>= 2) {
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    
    int min = INT_MAX, max = INT_MIN, minpos, maxpos;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            minpos = i;
        }
        if(arr[i] > max)
        {
            max = arr[i];
            maxpos = i;
        }
    }
    int temp = arr[minpos];
    arr[minpos] = arr[maxpos];
    arr[maxpos] = temp;
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    } 
    return 0;
}