#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int n;
        scanf("%d", &n);
        int nums[n];
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &nums[k]);
        }

        int ans;
        if (nums[0] != nums[1])
        {
            ans = (nums[2] == nums[0]) ? 2 : 1;
        } else {
            for (int i = 2; i < n; i++)
            {
                if (nums[i] != nums[0])
                {
                    ans = i + 1;
                    break;
                }
            }
        }
        printf("%d\n", ans);
        
        
    }
    
    return 0;
}