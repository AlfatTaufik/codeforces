#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int n;
        scanf("%d", &n);
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
        }

        int sum = 0;
        for (int t = 0; t < n; t++)
        {
            sum += nums[t];
        }
        
        printf("%s\n", sum % 2 == 0 ? "YES" : "NO");
        
    }
    
    return 0;
}