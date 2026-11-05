#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &nums[i]);
    }

    int mn = nums[0];
    int mx = nums[0];
    int total = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > mx)
        {
            total++;
            mx = nums[i];
        } else if (nums[i] < mn)
        {
            total++;
            mn = nums[i];
        }
    }
    
    printf("%d", total);
    
    return 0;
}