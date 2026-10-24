#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int nums[3];

        for (int p = 0; p < 3; p++)
        {
            scanf("%d", &nums[p]);
        }
        
        int diff = nums[0];
            if (nums[0] == nums[1])
            {
                diff = nums[2];
            } else if (nums[0] == nums[2])
            {
                diff = nums[1];
            }

        printf("%d\n", diff);
    }
    
    return 0;
}