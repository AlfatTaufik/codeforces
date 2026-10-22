#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n;
        scanf("%d", &n);

        int nums[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
        
        int ok = 1;
        for (int i = 0; i + 1 < n; i++)
        {
            if (nums[i + 1] - nums[i] > 1)
            {
                ok = 0;
                break;
            }
        }
        
        printf("%s\n", ok == 1 ? "YES" : "NO");
        
    }
    
    
    return 0;
}