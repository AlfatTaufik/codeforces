#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);
        nums[num - 1] = i;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d%c", nums[i], i < n ? ' ' : '\n');
    }
    
    return 0;
}