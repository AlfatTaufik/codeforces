#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int nums[3];
        for (int k = 0; k < 3; k++)
        {
            scanf("%d", &nums[k]);
        }
        
        int min = nums[0];
        int max = nums[0];

        for (int i = 0; i < 3; i++)
        {
            if (nums[i] < min)
            {
                min = nums[i];
            }
            if (nums[i] > max)
            {
                max = nums[i];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (nums[i] != max && nums[i] != min)
            {
                printf("%d\n", nums[i]);
            }
        }
    }
    return 0;
}