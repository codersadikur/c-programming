#include<stdio.h>

int main() {
    char c;
    int count[26] = {0};
    while(scanf("%c", &c) != EOF) {
        int val = c - 97;
        count[val]++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            char cha = i + 97;
            printf("%c : %d\n", cha, count[i]);
        }
    }
    return 0;
}