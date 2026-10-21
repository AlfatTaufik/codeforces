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

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (nums[i] > nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
        int ok = 1;
        for (int i = 0; i + 1 < n; i++)
        {
            if (nums[i + 1])
            {
                /* code */
            }
            
        }
        
    }
    
    
    return 0;
}